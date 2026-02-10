// write a program which accept number from user and print all odd number till number.

#include<iostream>
using namespace std;

void PrintOdd(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            cout<<iCnt<<"\t";
        }
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the Number : \n";
    cin>>iValue;

    PrintOdd(iValue);

    return 0;
}