% ---------------------------------
% Problem Set 1, Question 1, Part D
% ---------------------------------
%
% Author: YOUR NAME HERE
% Collaborators: 

function [features] = findFeaturesForAnimal(animal, names, data)

% Do not edit above this line!
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
%
% YOUR CODE HERE (replace the [] with your answer, and note that
% you may need more than one line of code!)
load 25animalbindat.mat;
v=animal;
vec=data(find(strcmp(names,animal))',:);
features = [vec];

% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Do not edit below this line!

end
