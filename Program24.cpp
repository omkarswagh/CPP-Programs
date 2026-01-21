// Write a program that accepts an integer from the user and displays its factors, limited to the numbers 1 through 5.

#include<iostream>
using namespace std;

void DisplayFactors(int iNo)
{
    if((iNo % 1) == 0)
    {
        cout<<"1\t";
    }
    if((iNo % 2) == 0)
    {
        cout<<"2\t";
    }
    if((iNo % 3) == 0)
    {
        cout<<"3\t";
    }
    if((iNo % 4) == 0)
    {
        cout<<"4\t";
    }
    if((iNo % 5) == 0)
    {
        cout<<"5\t";
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