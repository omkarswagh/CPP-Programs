// Accept one number from user and return sumation of all non Factors

#include<iostream>
using namespace std;

int SummationNonFactor(int iNo)
{
    int iCnt = 0, iSum = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
          iSum = iSum + iCnt;  
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter the Number  : \n";
    cin>>iValue;

    iRet = SummationNonFactor(iValue);
    cout<<"Summation of All non Factors are : "<<iRet;
    return 0;
}
