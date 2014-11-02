% ---------------------------------
% Problem Set 1, Question 1, Part C
% ---------------------------------
%
% Author: YOUR NAME HERE
% Collaborators: 

function [animals] = findAnimals(featureNames, names, features, data)

featureNames = cellstr(featureNames);

% Do not edit above this line!
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
%
% YOUR CODE HERE (replace the [] with your answer, and note that
% you may need more than one line of code!)
[v1;v2]=featureNames;
vec=data(:,find(strcmp(features,v1)))';
animals = [vec];

% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Do not edit below this line!

end
