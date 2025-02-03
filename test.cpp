#include <iostream>
using namespace std;
int main ()
{
    int number;
    cout<<"Enter a number";
    cin>>number; 
    if(number>0)
    cout<<"Number is positive";
    else if (number<0)
    cout<<"number is negative";
    else if (number==0)
    cout<<"number is zero";
    else
    cout<<"Enter a valid number";
    return 0;
}
