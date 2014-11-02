#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int i;
int nums[6]={0};
int main()
{
    srand(time(0));
    for(i = 0 ; i < 6 ; ++i)
    {
    lottary:
    int c = rand() % 50 +1 ;
            if ( c != nums[0] && c != nums[1] && c != nums[2] && c != nums[3] && c != nums[4] && c != nums[5])
            nums[i] = c;
        else
        goto lottary;
    }
    cout << nums[0]<<"  "<<nums[1]<<"  "<< nums[2]<<"  "<< nums[3]<<"  "<< nums[4]<<"  "<< nums[5]<<endl ;
    return 0;
}

