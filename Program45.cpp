// Accept one number from user and print that number of even number on screen.

#include<iostream>
using namespace std;

void DisplayEven(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout<<iCnt * 2<<"\t";
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the Number : \n";
    cin>>iValue;

    DisplayEven(iValue);

    return 0;
}