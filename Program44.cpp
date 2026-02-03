// Accept two number from user and display first number in second number of time.

#include<iostream>
using namespace std;

void Display(int iNo1, int iNo2)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        cout<<iNo1<<"\n";
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter First Number : \n";
    cin>>iValue1;

    cout<<"Enter Second Number : \n";
    cin>>iValue2;

    Display(iValue1,iValue2);

    return 0;
}