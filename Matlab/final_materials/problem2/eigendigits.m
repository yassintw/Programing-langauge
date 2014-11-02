%close all

% set up the figure and load the digits

figure(1)
clf
colormap gray
load mnistdigits
% load ldamnist
% X = S(:,1:2:5000);
% X = full(X)';

%first display the first 10 of each digit
for k = 1:5
for i = 1:10
  subplot(10,5,(i-1)*5+k)
  imagesc(reshape(X((k-1)*500+i*50,:),28,28)')
  axis square
  axis off
  pos = get(gca,'position');
  set(gca,'position',pos+[0 0 0.02 0.02])
  if (i == 1), title(['Examples of ' num2str(k-1)]), end
end
end

disp('Example digits. Press any key to continue (next figure may take a minute or two to appear)')
pause

% red will be positive, blue will be negative
figure(2)
redbluemap = zeros(64,3);
redbluemap(1:32,3) = (31:-1:0)/31;
redbluemap(33:64,1) = (0:31)/31;
colormap(redbluemap); 

% run principal component analysis (one command in Matlab!)

[ coeff score latent ] = princomp(X);

% show the first three principal components


for i = 1:3
  subplot(1,3,i)
  bounds = max(abs(coeff(:,i)));
  imagesc(reshape(coeff(:,i),28,28)',[-bounds bounds])
  axis square
  axis off
  title(['Component ' num2str(i)])
end

disp('Answer part (a), and then press any key to continue')
pause

% show effects of components

meandigit = mean(X);

figure(3)
colormap gray
for i = 1:3
   stepsize = std(score(:,i));
   for steps = 1:5
      subplot(3,5,(i-1)*5+steps)
      %showdigit = meandigit'+stepsize*1.5*(steps-3)*coeff(:,i);
      showdigit = meandigit'+stepsize*1.25*(steps-3)*coeff(:,i);
      imagesc(reshape(showdigit,28,28)');
      axis square 
      axis off
      if (steps == 3), title(['Component ' num2str(i)]), end
   end
end

disp('Answer part (b), and then press any key to continue')
pause


%add in more components to alter reconstructions


figure(4)
clf
colormap gray

%indices = [ 2290 1277 1431 812 828];
%indices = [ 1 101 201 301 401];
%indices = [ 1 1001 2001 3001];
indices = [ 1 50 501 1000 1001 1008 1501 1503 2001 2003];
labels = {'zero' 'zero' 'one' 'one' 'two' 'two' 'three' 'three' 'four' 'four'};
%labels = [ 0 0 1 1 2 2 3 3 4 4];
pclist = [ 0 1 2 3 5 10 20 50 200 300 784];
 
for k = 1:length(indices)
for i = 1:length(pclist)
  recon = meandigit+score(indices(k),1:pclist(i))*(coeff(:,1:pclist(i))');
  p = (i-1)*10+k;
  subplot(11,10,p)
  imagesc(reshape(recon,28,28)')
  axis square
  axis off
  pos = get(gca,'position');
  set(gca,'position',pos+[0 0 0.005 0.005])
  if (i == 1), title(labels{k}), end
  if(k==1), text(-80,10,[num2str(pclist(i)) ' components']), end
end
end


disp('Answer part (c)')