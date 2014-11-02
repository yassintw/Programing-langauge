% ---------------------------------
% Problem Set 6, Question 4 Part A
% ---------------------------------
%
% Author: Yassin Yazal
% Collaborators: 
%
% ---------------------------------

% generateSentence
%
% This function takes in all the parameters of the HMM language model and produces a random sentence
% from the model.
% 
% Input:
%     initProbs: a vector of the probabilities for the value of the first hidden state
%     transitionProbs: the transition probability matrix. Entry (i,j) contains the probability of
%         transitioning from hidden state j to hidden state i.
%     emissionProbs: the emission probability matrix. Entry (i,j) contains the probability of
%         observing word i when in hidden state j.
%
% Output:
%     sentence: a vector of word indices corresponding to the observations (the words) in the
%         generated sentence. Remember that the sentence should contain exactly five words. This
%         vector should contain only the numerical word indices, not the word strings themselves.
%

function sentence = generateSentence(initProbs, transitionProbs, emissionProbs)

% Do not edit above this line!
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

% YOUR CODE HERE
noun = initProbs(1);
verb = initProbs(2);
adj = initProbs(3);
l=0;
sentence = [];
for i = 1:5
    n=rand(1,1);
if n >= noun && n < verb
    j = max(find(emissionProbs(:,1)));
    p=1;
     if l ~= 0
        k = transitionProbs(l,p);
    end
    m = randsample(j,1);
elseif n >= verb && n < adj
    j = max(find(emissionProbs(:,2)));
    p=2;
     if l ~= 0
        k = transitionProbs(l,p);
    end
    m = randsample(j,1);
else
   p=3;
    if l ~= 0
        k = transitionProbs(l,p);
    end
   j = max(find(emissionProbs(:,3)));
   m = randsample(j,1); 
end
l = p;
sentence = [sentence,m];
end

% Do not edit below this line!
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
end
