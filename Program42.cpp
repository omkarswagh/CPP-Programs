// Accept one number from user and print that number of star on screen.

#include<iostream>
using namespace std;

void PrintStar(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout<<"* \n";
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the Number : \n";
    cin>>iValue;

    PrintStar(iValue);

    return 0;
}