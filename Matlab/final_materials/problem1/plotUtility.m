% -----------------------------
%  Question 3 Part B
% -----------------------------
%
% Author: Yassin Yazal
%
% -----------------------------
%
% file: plotUtility.m
%    Plots four different utility functions for a range from $0 to $500,000
%
% output:
%    utilityPlot: a plot with four subplots

function [utilityPlot] = plotUtility(cases)

figure('units', 'normalized', 'outerposition', [0 0 1 1]); 

x = 0:10:500000;

% Do not edit above this line!
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    
%% Plot U(x) = x

% YOUR CODE HERE
subplot(2,2,1);
plot(x,x);
title('Linear');

%% Plot U(x) = log(x)

% YOUR CODE HERE
subplot(2,2,2);
plot(x, log(x));
title('Logrithmic');

%% Plot U(x) = sqrt(x)

% YOUR CODE HERE
subplot(2,2,3);
plot(x, sqrt(x));
title('Square Root');

%% Plot U(x) = 1-e^(-x/200000)

% YOUR CODE HERE
subplot(2,2,4);
plot(x,1-exp(-x/200000));
title('Negative Exponential');

% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Do not edit below this line!

utilityPlot = get(gcf);
        
end
