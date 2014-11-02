% ---------------------------------
% Problem Set 6, Question 1 Part E
% ---------------------------------
%
% Author: Yassin Yazal
% Collaborators: 
%
% ---------------------------------
%
% file: participantRatings.m
 
function [ratings, ratingsPlot] = participantRatings()

    figure(3);
    load animalDataset.mat;

    % Do not edit above this line!
    % ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   
    % YOUR CODE HERE
      
    ratings = [5,5,4,4,3,3,2,2,7,6]'; % fill in with judgments from your participant
    ratingsPlot = bar(ratings); % fill in arguments to bar
    set(gca, 'xticklabel', names)
    title('participant rating')
    xlabel('animals')
    ylabel('rating')
   
    % ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    % Do not edit below this line!
    
    ratingsPlot = get(ratingsPlot);

end
