// Write a program which accepts an integer from the user and returns its digits in reverse order.

#include<iostream>
using namespace std;

int ReverseDigit(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iRev = (iRev * 10) + iDigit;
    }

    return iRev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the Number : \n";
    cin>>iValue;

    iRet = ReverseDigit(iValue);
    cout<<"reverse Digit is : "<<iRet;
    return 0;
}