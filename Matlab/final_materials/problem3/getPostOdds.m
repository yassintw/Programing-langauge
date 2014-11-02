% ---------------------------------
%  Question 5 Part C
% ---------------------------------
%
% Author: Yassin Yazal
%
% ---------------------------------
%
% file: getPostOdds.m

% Now, assume that the learner views L1 and L2 as probability distributions
% over sentences. Under L1, sentences are generated with the probability 
% distribution observed in English. Under L2, with probability c the 
% sentence "Furiously sleep ideas green colorless" is generated, and with 
% probability 1?c a sentence is generated from the probability distribution 
% observed in English. Thus, the probability of any particular sentence in 
% English in L2 is (1 - c) times the probability of that sentence in L1.
%
% The problem of learning a language can now be formulated as a problem of 
% Bayesian inference. The hypotheses h are languages, and the data d are 
% sentences. The likelihood P (d|h) is the probability of a set of 
% sentences given a language.

function [postOdds] = getPostOdds(n)

% Calculate the posterior odds of observing a single English sentence                

c = 0.001;        % the probability of generating the sentence
                % "Furiously sleep ideas green colorless"
                
% Do not edit above this line!
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                

% YOUR CODE HERE
postOdds = 1/(n*(1-c));  % posterior odds after observing n sentences
                % in English 



% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Do not edit below this line!

end
