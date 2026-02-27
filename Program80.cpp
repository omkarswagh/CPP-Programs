// write a program to find Odd factorial of given number.

//////////////////////////////////////////////////////////////////////////
//  
//  File Name :   Program80.cpp
//  Description : program to find odd factorial of given number
//  Author :      Omkar Santosh Wagh
//  Date :        22/01/2026
//
//////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Factorial
{
    private:
        int iNo;

    public:
        Factorial(int X)
        {
            this->iNo = X;
        }

        int OddFactorial()
        {
            int iCnt = 0, iMulti = 1;

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                if((iCnt % 2) != 0)
                {
                    iMulti = iMulti * iCnt;
                }
            }

            return iMulti;
        }
};

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter the Number : \n";
    cin>>iValue;

    Factorial *fobj = new Factorial(iValue);
    iRet = fobj->OddFactorial(); 

    cout<<"Odd Factorial is : "<<iRet<<"\n";

    delete fobj;

    return 0;
}