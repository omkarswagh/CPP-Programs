// Accept Number from user and Check wheather number is Prime number or not.

#include<iostream>
using namespace std;

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)     // Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the number : \n";
    cin>>iValue;

    bRet = CheckPrime(iValue);
    if(bRet == true)
    {
        cout<<iValue<<" is a prime number\n";
    }
    else
    {
        cout<<iValue<<" is not a prime number\n";
    }

    return 0;
}
