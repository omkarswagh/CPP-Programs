#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout<<"Jay Ganesh..."<<iCnt<<"\n";
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the that printf Jay Ganesh on screen....\n";
    cin>>iValue;

    Display(iValue);

    return 0;
}