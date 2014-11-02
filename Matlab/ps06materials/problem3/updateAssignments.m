% ---------------------------------
% Problem Set 6, Question 3 Part A
% ---------------------------------
%
% Author: Yassin Yazal
% Collaborators: 
%
% ---------------------------------
%
% function: updateAssignments
%
% input
%   numClusters: an integer representing the number of clusters we assume
%                the data can be partitioned into. For the current
%                assignment, you may assume numClusters = 3
%
%   X: a 30x2 matrix of the observations
%
%   centers: a 3x2 matrix of the cluster centers where each row corresponds
%            to one of the clusters. Centers = random samples from a normal
%            distribution about mean(X) with std dev = 0.5
%
% output
%   clusterAssignments: a column vector containing the cluster label
%       assignments for each data point in X. The labels will be either 1, 
%       2, or 3, corresponding to which cluster center is closet to a 
%       particular data point

function [clusterAssignments] = updateAssignments(numClusters,X,centers)

% This might be useful when computing the distance from a point to a center
distanceToCenter = zeros(numClusters,1);

% Do not edit above this line!
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

% ENTER YOUR CODE HERE
for i=1:length(X)
    Z=sqrt((X(i,1)-centers(:,1)).^2+(X(i,2)-centers(:,2)).^2);
    cluster=find(Z == min(Z));
    q(i,1) = cluster; 
    
end
    
clusterAssignments = [q];
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Do not edit below this line!
  
end


