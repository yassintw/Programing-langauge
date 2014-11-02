% ---------------------------------
% Problem Set 4, Question 1, Problem1.m
% ---------------------------------
%
% Author: Yassin Yazal
% Collaborators: 
%
% ---------------------------------

%% FUNCTION DESCRIPTION
%Train a Hebbian network to associate input vectors with output vectors by
%way of features.

%% Define the input data
function [updatedW, yhatDog, yhatCat, yhatAnimalX2,yhatAnimalX5,yhatAnimalX8] = Problem1()

inputFeatures = {'chases sticks', 'likes water','whiskers','furry'};
outputFeatures = {'hiss','bark','neigh','growl'};

xDog = [ 1, 1, 1, 1 ]';
xCat = [ -1, -1, 1, 1 ]';

yDog = [ -1, 1, -1, 1 ]';
yCat = [ 1, -1, -1, 1 ]';

W = zeros(length(xDog));


% Do not edit above this line!
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

%% Problem 1 (B)
updatedW = [calculateWeights(W,[xDog,xCat],[yDog,yCat])]; % call the function as specified

yhatDog = [updatedW*xDog]; % set using equation 1
yhatCat = [updatedW*xCat]; % set using eauation 1


%% Problem 1 (C)
X2 = 0.2 ;
X5 = 0.5 ;
X8 = 0.8 ;
animalX2 = X2*xDog+(1-X2)*xCat;
animalX5 = X5*xDog+(1-X5)*xCat;
animalX8 = X8*xDog+(1-X8)*xCat;
yhatAnimalX2 = [updatedW*animalX2];
yhatAnimalX5 = [updatedW*animalX5];
yhatAnimalX8 = [updatedW*animalX8];

% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Do not edit below this line!

end


