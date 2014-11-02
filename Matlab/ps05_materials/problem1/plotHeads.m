% ---------------------------------
% Problem Set 5, Question 1 Part C
% ---------------------------------
%
% Author: Yassin Yazal
% Collaborators: 
%
% ---------------------------------
%
% file: plotHeads.m
%       uses probBiasedCoin to plot the change in posterior probability
%       under h1 for increasing sequences of consecutive heads
%
% input:
%   numHeads: the max length for our sequence of H's
%
% output:
%   postPlot: a plot structure containing information about the plot of 
%       posterior probabilities under h1 vs. length of the H sequence. 
%       MAKE SURE TO SAVE YOUR PLOT AS A JPEG NAMED postPlot.jpg 
%

function [postPlot] = plotHeads(numHeads)

% Do not edit above this line!
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

% YOUR CODE HERE
numHeads = 10;
for i= 1:numHeads
    flipSequence = ones(1,i);
postPlot(i) = probBiasedCoin(flipSequence);
end
plot(1:numHeads,postPlot)
xlabel ('numHeads = 10');
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Do not edit below this line!

postPlot = get(postPlot);


end