% ---------------------------------
% Problem Set 6, Question 3 Part D
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
%                assignment, assume numClusters = 3
%
%   newObject: a 1x2 vector - the (x,y) pair corresponding to a new observation
%
%   updatedCenters: a 3x2 matrix of the cluster centers where each row corresponds
%            to one of the centers
%
% output
%   newObjectAssignment: an integer corresponding to the cluster label
%       assignment for newObject. The label will be either 1, 2, or 3, 
%       corresponding to which cluster center is closet to the newObject
%

function newObjectAssignment = assignNewObject(numClusters,newObject,updatedCenters)

% This might be useful when computing the distance from a point to a center
distanceToCenter = zeros(numClusters,1);

% Do not edit above this line!
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

% ENTER YOUR CODE HERE
    Z=sqrt((newObject(1,1)-updatedCenters(:,1)).^2+(newObject(1,2)-updatedCenters(:,2)).^2);
    cluster=find(Z == min(Z));
    
    

newObjectAssignment = [cluster];

% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Do not edit below this line!

end
