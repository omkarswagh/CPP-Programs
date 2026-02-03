// Display only even Digit

#include<iostream>
using namespace std;

void DisplayEvenDigit(int iNo)
{
    int iDigit = 0;

    cout<<"Even Digit are : \n";
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            cout<<iDigit<<"\n";
        }
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the Number : \n";
    cin>>iValue;

    DisplayEvenDigit(iValue);

    return 0;
}