% ---------------------------------
% Problem Set 3, Question 4, Part A
% ---------------------------------
%
% Author: Yassin Yazal
% Collaborators: 

function [similarity] = calculateSimilarity(stim1, stim2, s)
% function: calculateSimilarity.m
%  
% Computes the similarity between two stimuli, according to Equation 4
% from the homework.
%
% Input:
%    stim1, stim2:
%        M-length binary vector, indicating the features the
%        stimulus does or does not have
%    s:
%        A number corresponding the s parameter in Equation 4
%        (optional; default value is 0.1)
%
% Output:
%    similarity:
%        a number representing the similarity between `stim1` and
%        `stim2`.

    if (nargin < 3)
        % if s was not passed in, then set it to 0.1
        s = 0.1;
    end

    % Do not edit above this line!
    % ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    % YOUR CODE HERE
    I=stim1~=stim2; 
    similarity = [prod(s.^I)];
    
    % ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    % Do not edit below this line!

end
