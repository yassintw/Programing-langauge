% ---------------------------------
% Problem Set 6, Question 1 Part C
% ---------------------------------
%
% Author: Yassin Yazal
% Collaborators: 
%
% ---------------------------------
%
% file: probAnimalsHaveK.m
%    computes the probability that each of the nine other animals has
%    blood that contains protein K
%
% input:
%    animal: the name of a kind of animal observed to have protein K
%
% output:
%    probs: a column vector containing the posterior probability of
%        each animal having protein K.
 
function [probs] = probAnimalsHaveK(animal)

    load animalDataset.mat;

    % Do not edit above this line!
    % ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   
    % YOUR CODE HERE
    x=probClustersHaveK(animal);
    for y=1:length(names)
        prob(y)=sum(hyps(:,y).*x);
    end
    probs = [prob'];

    % ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    % Do not edit below this line!

end
