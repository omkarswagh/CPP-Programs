// Display only even factor

#include<iostream>
using namespace std;

void DisplayEvenFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    cout<<"Even factors are : \n";
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(((iNo % iCnt) == 0)  && (iCnt % 2) == 0)
        {
            cout<<iCnt<<"\n";
        }
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the Number : \n";
    cin>>iValue;

    DisplayEvenFactors(iValue);

    return 0;
}