% ---------------------------------
% Problem Set 6, Question 2 Part B
% ---------------------------------
%
% Author: Yassin Yazal
% Collaborators: 
%
% ---------------------------------
%
% file: plotBayesPolyfit.m

function [MSE_train, MSE_test, funcPlot, msePlot] = plotBayesPolyfit()

    load xyData.mat;

    % constant parameters 
    alpha = 5;
    k = 7;
    betas = [1 0.5 0.3 0.2 0.1 0.05 0.01 0.001]';
    sigma_y = 0.05;
    
    figure('units', 'normalized', 'outerposition', [0 0 1 1]); 

    % Do not edit above this line!
    % ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    x1=traindata(:,1);
    y1=traindata(:,2);
    x2=testdata(:,1);
    y2=testdata(:,2);
    MSE_train = zeros(length(betas),1);
    MSE_test=zeros(length(betas),1);
    for i=1:length(betas)
        beta=betas(i);
        theta1 = bayespolyfit(x1,y1,k,sigma_y,alpha,beta);
        subplot(2,4,i)
        g_calc1=polyval(theta1,x1);
        funcPlot=plot(x1,g_calc1);
        xlabel('traindata(:,1)')
        ylabel('g_calc1')
        title(beta)
        g_calc2=polyval(theta1,x2);
        MSE_train(i) = mean((y1-g_calc1).^2);
        MSE_test(i) = mean((y2-g_calc2).^2);
    end




    % Do not edit between these lines!
    % ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    funcPlot = get(gcf);
    figure('units', 'normalized', 'outerposition', [0 0 1 1]); 
    % ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    % YOUR CODE HERE
    msePlot = plot(betas,MSE_train,betas,MSE_test)
    legend ('Train ','Test ')
    xlabel ('Betea ')
    ylabel ('MSE ')
    title('MSE about train and test data')


    % ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    % Do not edit below this line!
    
    msePlot = get(gcf);

end
