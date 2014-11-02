% -----------------------------
%  Question 3 Part E
% -----------------------------
%
% Author: Yassin Yazal
%
% -----------------------------
%
% file: compareOffers.m
%    Computes the utility of two offers, and compares it to the
%    expected utility of the remaining cases using the given
%    utility function.
%
% input:
%    remainingCases: a 1xN vector of dollar amounts
%    method: a string, should be one of 'linear', 'log', 'sqrt', or 'negexp'
%
% output:
%    gambleUtil:
%        the expected utility of the remaining cases
%    lowOfferUtil:
%        the utility of the low offer, which is 0.81*E[x]
%    acceptLowOffer:
%        whether the low offer should be accepted
%    highOfferUtil:
%        the utility of the high offer, which is 0.91*E[x]
%    acceptHighOffer:
%        whether the high offer should be accepted

function [gambleUtil, lowOfferUtil, acceptLowOffer, highOfferUtil, acceptHighOffer] = compareOffers(cases, method)

    % YOUR CODE HERE
    Ex = dot(computeUtility(cases, method),cases)/sum(computeUtility(cases, method));
    gambleUtil = expectedUtility(cases, method);
    lowOfferUtil = 0.81*Ex;
    acceptLowOffer = gambleUtil > lowOfferUtil;
    highOfferUtil = 0.91*Ex;
    acceptHighOffer = gambleUtil < highOfferUtil;

end
