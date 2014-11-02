% --------------------------------
% Problem Set 6, Question 1 Part A
% --------------------------------
%
% Author: Yassin Yazal
% Collaborators: 
%
% ---------------------------------
%
% file: probClustersHaveK.m
%    computes a posterior distribution over hypotheses as to which
%    sets of animals have blood containing protein K, using the
%    Bayesian generalization model
%
% input: 
%    animal: the name of a kind of animal observed to have protein K
%
% output:
%    probs: a column vector containing the posterior probability of
%        each hypothesis.

function [probs] = probClustersHaveK(animal)
    
    load animalDataset.mat;

    % Do not edit above this line!
    % ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    % YOUR CODE HERE
    x=1;
    while ~strcmp(names{x},animal)
        x=x+1;
    end
    hypoanimal=find(hyps(:,x));
    Pd_h=zeros(size(hyps,1),1);
    P_top=zeros(size(hyps,1),1);
        for y=1:length(hypoanimal)
        hypo_num=hypoanimal(y);
        Pd_h(hypo_num)=1/sum(hyps(hypo_num,:));
        P_top(hypo_num)=Pd_h(hypo_num)*prior(hypo_num);
        end
    probs = P_top./(sum(P_top));
    % ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    % Do not edit below this line!
    
end

