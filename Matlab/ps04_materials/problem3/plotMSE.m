% ---------------------------------
% Problem Set 4, Question 3, Part D
% ---------------------------------
%
% Author: YOUR NAME HERE
% Collaborators: 

function [msePlotInfo] = plotMSE(mseVector)
% function: plotMSE.m
%
% Computes the MSE for each of the predictions of the network compared
% to the test set, following Equation 1 from the homework.
%
% input:
%       mseVector: an array of mean squared errors
    
% ensures that the plot is fullscreen
figure('units', 'normalized', 'outerposition', [0 0 1 1]); 

% Do not edit above this line!
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    
    % YOUR CODE HERE
    
    msePlot = bar(mseVector);
    title('MSE')
    xlabel('total data')
    ylabel('MSE for each data')

    % fill in the appropriate arguments to bar

% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Do not edit below this line!

msePlotInfo = get(msePlot);

end
