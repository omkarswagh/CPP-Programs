// write a program which accept number from user and print numberline of that number.

#include<iostream>
using namespace std;

void PrintNumberLine(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        cout<<iCnt<<"\t";
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the Number : \n";
    cin>>iValue;

    PrintNumberLine(iValue);

    return 0;
}