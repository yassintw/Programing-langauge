% ---------------------------------
% Problem Set 5, Question 2 Part B
% ---------------------------------
%
% Author: Yassin Yazal
% Collaborators: 
%
% ---------------------------------
%
% file: findMSEandGraph.m
%       computes the Mean Squared Error (MSE) for both the training data
%       and testing data.
%
% input:
%   traindata: 10 x 2 coordinate matrix from xyData.mat
%   testdata : 100 x 2 coordinate matrix from xyData.mat
%
% output:
%   MSE: 2 x 9 matrix of MSE values where columns correspond to the dataset 
%        (traindata = column 1, testdata = column 2) and rows correspond to 
%        the degree of the polynomial g we are fitting to the data. 


function [MSE] = findMSE(traindata, testdata)

% RELABEL THE TRAINING DATA
x = traindata(:,1);
y = traindata(:,2);

% RELABEL THE TEST DATA
test_x=testdata(:,1);
test_y=testdata(:,2);

% Do not edit above this line!
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

% Problem 2 (b i. & ii.)
% CALCULATE MSE FOR TRAINING DATA (COLUMN 1) AND TEST DATA (COLUMN 2)
MSE = [];
for k = 0:8
     p = polyfit(x,y,k);
     train = polyval(p,x);
     test = polyval(p,test_x);
     
end
plot()
legend('Train', 'Test')

% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Do not edit below this line!

end