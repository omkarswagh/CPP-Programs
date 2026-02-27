// Accept amount in US doollor and return its corresponding value in indian currency. consider 1$ as 70 Rupees.

//////////////////////////////////////////////////////////////////////////
//  
//  File Name :   Program73.cpp
//  Description : Accept amount in US doollor and return indian currency
//  Author :      Omkar Santosh Wagh
//  Date :        20/01/2026
//
//////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Convertor
{
    private:
          int iNo;
    public:
        Convertor(int A)
        {
            this->iNo = A;
        }

        int dollorToINR()
        {
            int iCurrancy = 0, iRupee = 70;

            iCurrancy = iNo * iRupee;
            return iCurrancy;
        }
};

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter Number of USD : \n";
    cin>>iValue;

    Convertor *cobj = new Convertor(iValue);
    iRet = cobj->dollorToINR();

    cout<<"Value in INR is : "<<iRet;
    
    delete cobj;

}