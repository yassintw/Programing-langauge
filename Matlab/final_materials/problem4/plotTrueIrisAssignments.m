% -----------------------------
%  Question 6 Part A
% -----------------------------
%
% Author: Yassin Yazal
%
% -----------------------------
%
% file: plotTrueIrisAssignments.m
%    Generates a single plots with each Iris in irisData represented as a 
%    point in 2-dimensional space, with sepal lengths on the X-axis and 
%    sepal widths on the Y-axis. Iris setosa should be represented with 
%    black dots, and Iris versicolor should be represented with blue dots.
%
% input:
%    irisMeasurements: 
%       A matrix in which each row corresponds to the measurements for a 
%       particular flower. The first column contains the length of the 
%       sepals for each flower, and the second column contains the width of
%       the sepals.
%
%    irisNames: 
%       An array containing the species name for each flower. For 
%       each row in irisMeasurements, the corresponding row in irisNames 
%       tells you whether the flower is of the species Setosa or Versicolor.
%
% output:
%    plotInfo:
%        A data structure containing information about the plot you generate. 
%        This is info is used solely for validate/debug purposes and should be
%        automatically generated when you run your completed function.

function [plotInfo] = plotTrueIrisAssignments(irisMeasurements, irisNames)

% Do not edit above this line!
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

% YOUR CODE HERE
Setosa = irisMeasurements(strcmp(irisNames,'Setosa'),:);
plot(Setosa(:,1),Setosa(:,2),'ko','MarkerFaceColor','k')
hold on
Versicolor = irisMeasurements(strcmp(irisNames,'Versicolor'),:);
plot(Versicolor(:,1),Versicolor(:,2),'bo','MarkerFaceColor','b')
hold off
xlabel('sepal lengths');
ylabel('sepal widths');
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Do not edit below this line!

plotInfo = get(gcf);

end