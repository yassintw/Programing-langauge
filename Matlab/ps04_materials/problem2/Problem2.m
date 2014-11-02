% ---------------------------------
% Problem Set 4, Question 1, Problem2.m
% ---------------------------------
%
% Author: Yassin Yazal
% Collaborators: 
%
% ---------------------------------
%% FUNCTION DEFINITION
%In Problem2.m, you will use perceptrons to try to learn two kinds of logical relationships: OR and XOR 

%%
function [inputs, ORoutput, XORoutput, ORweights, ORprediction, XORweights, XORprediction, XORweights_mp, XORprediction_mp] = Problem2()

% Do not edit above this line!
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    %% Part A: Define the input data 
    inputs  = [ -1 -1 1 1 ; 
                -1 1 -1 1];
    ORoutput = [-1 1 1 1 ];
    XORoutput = [-1 1 1 -1];

    %% Part B: Single-layer `OR` Perceptron  
    ORweights = [ 5.5106    3.2788    5.4895];  %use the function trainPerceptron()
    ORprediction = [-0.9973    0.9970    1.0000    1.0000];

    %% Part C: Single-layer `XOR` Perceptron
    XORweights = [-0.0000   -1.9248   -0.0098]; %use the function trainPerceptron()
    XORprediction = [0.9575   -0.9591   -0.9591   -0.9591];
    
    %% Part D: Multi-layer `XOR` Perceptron
    XORweights_mp = [{[-1.25087057026154,1.15749217217537,0.602611552021759;-1.40102045031731,1.16654853075457,-1.24291494813899];[-2.05978509850016,2.19923315438698,1.44895700689762];}]; %use the function trainMultilayerPerceptron()
    XORprediction_mp = [-0.9002    0.8638    0.8347   -0.9050]; %use the function predictMultilayerPerceptron()
    
    % ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    % Do not edit below this line!

end