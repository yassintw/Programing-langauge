% ---------------------------------
% Problem Set 4, Question 1, calculateWeights.m
% ---------------------------------
%
% Author: Yassin Yazal
% Collaborators: 
%
% ---------------------------------

%% FUNCTION DESCRIPTION
%  Updates the current weight matrix W using Hebbian learning.
% 
% input:
%    W: the current weight matrix
%
%    trainingInputs:  a matrix where each row is the transpose of a 
%                     training stimulus (e.g., xDog = [1 1 1 1]'). 
%
%    trainingOutputs: a matrix where the ith row is the transpose of the 
%                     output vector for the ith stimulus 
%                     (e.g., yDog  = [-1 1 -1 1]'). 
%
% output:
%    updatedW: the updated weight matrix after the network has seen the
%              given training data.
%
%%

function[updatedW] = calculateWeights(W, trainingInputs, trainingOutputs)
eta = 0.25;

% Do not edit above this line!
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
updatedW = W ;
for i = 1:size(trainingOutputs, 2)
    updatedW = updatedW + eta*trainingOutputs(:,i)*trainingInputs(:,i)';
end


% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Do not edit below this line!

end