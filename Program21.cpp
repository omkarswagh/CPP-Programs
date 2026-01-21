#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        cout<<iCnt<<"\t";
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the Number that You Printf  in Reverse order on screen....\n";
    cin>>iValue;

    Display(iValue);

    return 0;
}