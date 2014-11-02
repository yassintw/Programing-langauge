% --------------------------------
% Problem Set 6, Question 1 Part B
% --------------------------------
%
% Author: Yassin Yazal
% Collaborators: 
%
% ---------------------------------
%
% file: plotProbClustersHaveK.m
%    computes a posterior distribution over hypotheses as to which
%    sets of animals have blood containing protein K, using the
%    Bayesian generalization model
%
% input: 
%    animal: the name of a kind of animal observed to have protein K
%
% output:
%    postPlot: a plot structure containing information about the plot of 
%        posterior probabilities over hypotheses

function [postPlot] = plotProbClustersHaveK(animal)
    
    figure(1);

    % Do not edit above this line!
    % ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    % YOUR CODE HERE

    postPlot = bar(probClustersHaveK(animal));
    title(animal)
    xlabel('hypotheses')
    ylabel('posterior probabilities')
    % fill in arguments to bar

    % ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    % Do not edit below this line!
    
    postPlot = get(postPlot);

end

