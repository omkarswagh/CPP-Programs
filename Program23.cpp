// Write a program that takes two integers as input and checks whether the second number is a factor of the first number.
// If divisible, display that it is a factor; otherwise, display that it is not.

/* Algorithm
    START

    Accept first number (Dividend) -> iValue1
    Accept second number (Divisor) -> iValue2
    
    Check if iValue2 is 0. 
        If TRUE -> Display "Cannot divide by Zero" and STOP.
    
    Calculate Remainder = iValue1 % iValue2
    
    If Remainder is 0
        Display "It is a Factor"
    Else
        Display "It is NOT a Factor"
STOP
    STOP
*/

#include<iostream>
using namespace std;

#include<stdbool.h>

bool CheckFactor(int iNo1, int iNo2)
{
    if(iNo2 == 0)
    {
        cout<<"Invalide INPUT...\n";
        return false;
    }

   if((iNo1 % iNo2) == 0)
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
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = false;

    cout<<"Enter First Number : \n";
    cin>>iValue1;

    cout<<"Enter Second Number : \n";
    cin>>iValue2;

    bRet = CheckFactor(iValue1, iValue2);

    if(bRet == true)
    {
        cout<<iValue2<<" is Factor of : "<<iValue1;
    }
    else
    {
        cout<<iValue2<<" is NOT Factor of : "<<iValue1;
    }
    return 0;
}