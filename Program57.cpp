// Accept number from user and print small is number is less than 50 print small , less than 100 medium , greater than 100 print large

#include<iostream>
using namespace std;

void Display(int iNo)
{
    if(iNo < 50)
    {
        cout<<"Number is Small\n";
    }
    else if(iNo < 100)
    {
        cout<<"Number is Medium\n";
    }
    else if(iNo >= 100 )
    {
        cout<<"Number is Large\n";
    }
}

int main()
{
    int iValue = 0;
    cout<<"Enter the Number : \n";
    cin>>iValue;
    Display(iValue);
    return 0;
}