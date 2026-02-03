// Accept one number from user and print even factors of number on screen.

#include<iostream>
using namespace std;

void EvenFactor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0 && ((iCnt % 2) == 0))
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

    EvenFactor(iValue);

    return 0;
}