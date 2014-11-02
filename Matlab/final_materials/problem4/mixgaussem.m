function mixgaussem(irisMeasurements)

Nclus = 2;     % number of clusters
Niters = 100;  % maximum number of iterations
convthresh = 0.000001;
regparam = 0.01;

[ N d ] = size(irisMeasurements); % N is the number of points, d the dimension

% initialize parameters + covariance from sample, mean from a point
sampi = ceil(rand(d+1,Nclus)*N);
sigma = cell(Nclus,1);
mu = cell(Nclus,1);
for k=1:Nclus
    samp = irisMeasurements(sampi(:,k),:);
    sigma{k} = rand*cov(samp);
    mu{k} = samp(1,:);
end
mix = rand(1,Nclus);
mix = mix/sum(mix);

% start EM
last = -inf;
i = 0;
figure(1)
clf
while (i < Niters)
    
    % work out unnormalised posteriors
    lp = zeros(N,Nclus);
    h = zeros(N,Nclus);
    for k = 1:Nclus
        lp(:,k) = gaussian_prob(irisMeasurements,mu{k},sigma{k},1); % probs under Gaussian
    end
    
    h = lp + ones(N,1)*log(mix);
    
    % work out probabilistic assignments, avoiding underflow
    lm = max(h,[],2);
    h = exp(h-lm*ones(1,Nclus))./(sum(exp(h-lm*ones(1,Nclus)),2)*ones(1,Nclus));
    
    % update parameters
    mix = mean(h);
    for k = 1:Nclus
        mu{k} = sum(irisMeasurements.*(h(:,k)*ones(1,d)))./sum(h(:,k)*ones(1,d));
        diffs = irisMeasurements - (ones(N, 1) * mu{k});
        diffs = diffs.*(sqrt(h(:,k))*ones(1,d));
        sigma{k} = (diffs'*diffs)/sum(h(:,k));
        
        % REGULARIZE THE COVARIANCE TO AVOID SINGULARITY (DES)
        sigma{k}(find(isnan(sigma{k}))) = 0; % RESET IF NAN
        sigma{k} = (1-regparam)*sigma{k} + regparam*eye(length(sigma{k}));
        
        if (rcond(sigma{k}) < regparam)
            error([ 'Component ' num2str(k) ' has shrunk to nothing!' ]);
        end
        
    end
    
    % compute log-likelihood of data
    for k = 1:Nclus
        lp(:,k) = gaussian_prob(irisMeasurements,mu{k},sigma{k},1); % probs under Gaussian
    end
    logmax = max(lp,[],2);
    current = sum(logmax+log(exp(lp-logmax*ones(1,Nclus))*mix'));
    disp([ 'Log-likelihood of data on iteration ' num2str(i+1) ' is: ' num2str(current) ])
    
    % plot current results
    figure(1)
    clf
    ngrid = 100;
    mid = min(irisMeasurements)-0.1*range(irisMeasurements);
    mad = max(irisMeasurements)+0.1*range(irisMeasurements);
    Xvals = linspace(mid(1), mad(1), ngrid);
    Yvals = linspace(mid(2), mad(2), ngrid);
    [X1, X2] = meshgrid(Xvals, Yvals);
    XX = [X1(:), X2(:)];
    figure(1)
    hold on
    for j = 1:N
        ph=plot(irisMeasurements(j,1),irisMeasurements(j,2), 'ko');
        set(ph,'markerfacecolor', [ h(j,1) 0 h(j,2) ],'markersize',6)
    end
    set(gca, 'xtick', [], 'ytick', [], 'xlim', [mid(1) mad(1)], 'ylim', ...
        [mid(2) mad(2)])
    
    for k = 1:Nclus
        probs = gaussian_prob(XX,mu{k}, sigma{k});
        probs = reshape(probs, ngrid, ngrid);
        ch=contour(X1, X2, probs, 1, 'k');
        set(gca, 'xtick', [], 'ytick', [], 'xlim', [mid(1) mad(1)], 'ylim',[mid(2) mad(2)])
    end
    hold off
    current = sum(logmax+log(exp(lp-logmax*ones(1,Nclus))*mix'));
    title(['Iteration ' num2str(i+1) ';    Log-likelihood:  ' num2str(current) ])
    drawnow
    %  pause
    
    if ( (current-last)<convthresh )
        i = Niters;
    else
        i = i+1;
        last = current;
    end
    
end

return

function p=gaussian_prob(x, m, C, use_log)

% evaluate the multivariate Gaussian with mean vector m and covariance
% matrix C for the input vector x

if nargin<4, use_log = 0; end

d=length(m);

if size(x,1)~=d
    x=x';
end
N=size(x,2);

m=m(:);
M=m*ones(1,N);
denom=(2*pi)^(d/2)*sqrt(abs(det(C)));
invC = inv(C);
mahal=sum(((x-M)'*invC).*(x-M)',2);
if use_log
    ldetC = sum(log(eig(C)));
    ldenom = (d/2)*log(2*pi) + 0.5*ldetC;
    p = -0.5*mahal - ldenom;
else
    numer=exp(-0.5*mahal);
    p=numer/denom;
end

return





