% ---------------------------------
% Problem Set 1, Question 4, Part C
% ---------------------------------
%
% Author: Yassin Yazal
% Collaborators: 

function sentence = xynznGrammar(n)

% Do not edit above this line!
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
%
% Finish the code to create sentences defined as (xy)^n(z)^n, where `n` is
% the argument to this function. Store the result of calling the
% function in the `sentence` variable below.
sentence = [xynzn_phrase(n)];
    function x=xynzn_phrase(n)
        if n>1,
            x = ['xy' xynzn_phrase(n-1) 'z'];   
        else
             x= ['xyz'];

% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Do not edit below this line!

end
