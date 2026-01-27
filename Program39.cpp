// Accept Number from user and addition of digits
// Input : 7521
// Output : 15

#include<iostream>
using namespace std;

int SumDigits(int iNo)
{
    int iSum = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iSum = iSum + iDigit;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the Number : \n";
    cin>>iValue;

    iRet = SumDigits(iValue);

    cout<<"Addition of Digit Count is : "<<iRet;

    return 0;
}