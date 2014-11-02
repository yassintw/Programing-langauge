% ---------------------------------
% Problem Set 5, Question 1 Part B
% ---------------------------------
%
% Author: Yassin Yazal
% Collaborators: 
%
% ---------------------------------
%
% file: probBiasedCoin.m
%       computes the posterior probability of a biased coin (h1), given a
%       sequence of coin flips
%
% input:
%   flipSequence: a row vector of 0s (Tails) and 1s (Heads)
%
% output:
%   postProbH1: the posterior probability of the sequence of coin flips under
%         hypothesis 1 (a biased coin)
%

function [postProbH1] = probBiasedCoin(flipSequence)

% probability that the coin produces heads 
theta0=0.5;     % hypothesis 0 is a fair coin
theta1=0.95;    % hypothesis 1 is a biased coin

% prior probabilities of hypotheses
ph0=0.6;  
ph1=0.4; 

% Do not edit above this line!
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

% YOUR CODE HERE
numHeads = sum(ismember(flipSequence,1));
numTails = sum(ismember(flipSequence,0)); 
pd_h0 = theta0^numHeads*(1-theta0)^numTails;
pd_h1 = theta1^numHeads*(1-theta1)^numTails;
postProbH1 = [pd_h1*ph1/(pd_h0*ph0 + pd_h1*ph1)];

% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Do not edit below this line!

end

