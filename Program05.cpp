// Problem Statement : Accept value from user and Check number is Even or Odd.

#include<iostream>
using namespace std;

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the Number to Check Number is Even or Odd \n";
    cin>>iValue;

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        cout<<iValue<<" is Even Number\n";
    }
    else
    {
        cout<<iValue<<" is Odd Number \n";
    }


    return 0;
}