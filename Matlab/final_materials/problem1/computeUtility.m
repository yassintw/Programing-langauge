% -----------------------------
%  Question 3 Part A
% -----------------------------
%
% Author: Yassin Yazal
%
% -----------------------------
%
% file: computeUtility.m
%    Computes the utility of a number, given the name of a particular
%    utility function.
%
% input:
%    x: a 1xN vector of dollar amounts
%    method: a string, should be one of 'linear', 'log', 'sqrt', or 'negexp'
%
% output:
%    utility:
%        a 1xN vector of utilities

function [utility] = computeUtility(x, method)


    %% Compute U(x) = x
    if strcmp(method, 'linear')
    
        % YOUR CODE HERE
        utility = x;
    

    %% Compute U(x) = log(x)
    elseif strcmp(method, 'log')
        
        % YOUR CODE HERE
        utility = log(x);
    
       
    %% Compute U(x) = sqrt(x)
    elseif strcmp(method, 'sqrt')
    
        % YOUR CODE HERE
        utility = sqrt(x);
    
        
    %% Compute U(x) = 1 - e^(-x/200000)
    elseif strcmp(method, 'negexp')

        % YOUR CODE HERE
        utility = 1 - exp(-x/200000);

        
    %% Otherwise, the method is invalid
    else
        error('invalid utility function: %s', method);
    end

end
