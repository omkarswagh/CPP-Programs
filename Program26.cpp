// Program to divide two numbers

#include<iostream>
using namespace std;

int Divide(int iNo1, int iNo2)
{
    int iDivision = 0;
    iDivision = iNo1 / iNo2;
    return iDivision;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout<<"Enter the First Number  : \n";
    cin>>iValue1;

    cout<<"Enter the Second Number  : \n";
    cin>>iValue2;

    iRet = Divide(iValue1,iValue2);
    cout<<"Division is : "<<iRet;

    return 0;
}