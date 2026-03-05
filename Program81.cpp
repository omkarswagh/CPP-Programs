#include<iostream>
using namespace std;

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout<<iCnt<<"\t";
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    cout<<"Enter the Number : \n";
    cin>>iValue;

    iRet = Factorial(iValue);
    cout<<"\nFactorial of "<<iValue<<" is "<<iRet;

    return 0;
}