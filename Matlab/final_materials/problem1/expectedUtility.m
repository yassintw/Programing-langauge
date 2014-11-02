% -----------------------------
%  Question 3 Part D
% -----------------------------
%
% Author: Yassin Yazal
%
% -----------------------------
%
% file: expectedUtility.m
%    Computes the expected utility of set of cases, given the name of
%    a particular utility function to use.
%
% input:
%    cases: a 1xN vector of the dollar amounts of the
%        remaining cases
%    method: a string, should be one of 'linear', 'log', 'sqrt', or 'negexp'
%
% output:
%    utility:
%        the expected utility of the set of cases according to the
%        utility function specified by method

function [utility] = expectedUtility(cases, method)

    % YOUR CODE HERE
    utility = mean(computeUtility(cases, method));
    
end
