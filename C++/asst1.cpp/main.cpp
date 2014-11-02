#include <iostream>
using namespace std;
int main()
{
    float number;
    int Q,number1,D,N,P,quarters,dimes,nickels,pennies;
    cout << "Enter total cash: " ;
    cin >> number;
    number1=number*100;
    Q=25;
    D=10;
    N=5;
    P=1;
    quarters = number1/Q;
    number1=number1%Q;
    dimes= number1/D;
    number1=number1%D;
    nickels=number1/N;
    pennies=number1%N;
    cout <<"Total Quarters: "<<quarters<<endl;
    cout <<"Dimes: "<<dimes<<endl;
    cout <<"Nickels: "<<nickels<<endl;
    cout <<"Pennies: "<<pennies<<endl;
    return 0;
}
