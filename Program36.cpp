#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iDigit = 0;
    cout<<"---------------------------------------------\n";
    cout<<"Value of iNo is : "<<iNo<<"\n";   // 721

    cout<<"---------------------------------------------\n";
    iDigit = iNo % 10;
    cout<<"Digits is : "<<iDigit<<"\n";  // 1
    iNo = iNo / 10;     // 72
    cout<<"Value of iNo is : "<<iNo<<"\n";   // 72

    cout<<"---------------------------------------------\n";
    iDigit = iNo % 10;
    cout<<"Digits is : "<<iDigit<<"\n";   // 2
    iNo = iNo / 10;     // 7
    cout<<"Value of iNo is : "<<iNo<<"\n";   // 7

    cout<<"---------------------------------------------\n";
    iDigit = iNo % 10;
    cout<<"Digits is : "<<iDigit<<"\n";   // 7
    iNo = iNo / 10;     // 0
    cout<<"Value of iNo is : "<<iNo<<"\n";   // 0
}

int main()
{
    int iValue = 721;

    Display(iValue);

    return 0;
}