% ---------------------------------
% Problem Set 1, Question 1, Part B
% ---------------------------------
%
% Author: Yassin Yazal
% Collaborators: 

function [animals] = findAnimalsWithFeature(featureName, features, data)

% Do not edit above this line!
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
%
% YOUR CODE HERE (replace the [] with your answer, and note that
% you may need more than one line of code!)
load 25animalbindat.mat;
v=featureName;
vec=data(:,find(strcmp(features,featureName)))';
animals = [vec];

% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Do not edit below this line!

end
