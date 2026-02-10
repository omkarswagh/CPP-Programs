// write a program which accept number from user and print till that number.

#include<iostream>
using namespace std;

void PrintNumber(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout<<iCnt<<"\n";
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the Number : \n";
    cin>>iValue;

    PrintNumber(iValue);

    return 0;
}