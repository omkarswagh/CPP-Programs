// Accept Number from user and count how many digits in that number.

#include<iostream>
using namespace std;

int CountDigits(int iNo)
{
    int iCnt = 0;

    while(iNo !=0)
    {
        iNo = iNo / 10;
        iCnt ++;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the Number : \n";
    cin>>iValue;

    iRet = CountDigits(iValue);

    cout<<"Count of Digits in Number is : "<<iRet;

    return 0;
}