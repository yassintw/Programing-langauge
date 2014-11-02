% ---------------------------------
% Problem Set 6, Question 2 Part A
% ---------------------------------
%
% Author: Yassin Yazal
% Collaborators: 
%
% ---------------------------------
%
% file: findAndDisplayFunctions.m

function [thetas, funcPlot] = findAndDisplayFunctions()

    % constant parameters 
    alpha = 5;
    k = 7;
    betas = [1 0.5 0.3 0.2 0.1 0.05 0.01 0.001]';

    figure('units', 'normalized', 'outerposition', [0 0 1 1]); 

    % Do not edit above this line!
    % ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    % YOUR ANSWER HERE
    thetas = [];
    for i=1:length(betas)
    beta=betas(i,1);
    thetas = [thetas; funcsamp(alpha,beta,k)];
    plotx=-1:0.01:1;
    subplot(2,4,i);
    funcPlot = plot(plotx,polyval(thetas(i,:),plotx));
    xlabel('plotx=-1:0.01:1')
    ylabel('g(x)')
    title(beta)
    hold on ;
    end

    % ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    % Do not edit below this line!

    funcPlot = get(gcf);
end
