% ---------------------------------
% Problem Set 6, Question 3 Part B
% ---------------------------------
%
% Author: Yassin Yazal
% Collaborators: 
%
% ---------------------------------
%
% function: updateParameters
%
% input
%   numClusters: an integer representing the number of clusters we assume
%                the data can be partitioned into
%
%   X: a 30x2 matrix of the observations
%
%   clusterAssignments: a column vector containing the cluster label
%       assignments you calculated with updateAssignments. The labels will 
%       be either 1, 2, or 3, corresponding to which cluster center is closet
%       to a particular data point
%   
% output
%   updatedCenters: a 3x2 matrix of the updated cluster centers where each row 
%            corresponds to one of the centers
  
function [updatedCenters] = updateParameters(numClusters,X,clusterAssignments)

% Do not edit above this line!
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

% ENTER YOUR CODE HERE
load X.mat

clusterAssignments=updateAssignments(numClusters,X,centers);
x=X(:,1);
y=X(:,2);
for i=1:numClusters
a1=mean(x(find(clusterAssignments==i)));
a2=mean(y(find(clusterAssignments==i)));
xx(i,:)=[a1, a2];
end

updatedCenters = [xx];

% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Do not edit below this line!

end