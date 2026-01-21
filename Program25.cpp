// Write a program that accepts an integer from the user and displays its factors, limited to the numbers 1 through 5.

#include<iostream>
using namespace std;

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo %  iCnt) == 0)
        {
            cout<<iCnt<<"\t";
        }
    }
}

int main()
{
    int iValue  = 0;

    cout<<"Enter the Number : \n";
    cin>>iValue;

    DisplayFactors(iValue);

    return 0;
}