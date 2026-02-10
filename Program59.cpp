// Check number is pallindrome or not

#include<iostream>
using namespace std;

bool CheckPallindrome(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    int iCopy = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iRev = ((iRev * 10) + iDigit);
    }

    return(iCopy == iRev);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the Number : \n";
    cin>>iValue;

    bRet =  CheckPallindrome(iValue);
    if(bRet == true)
    {
        cout<<iValue<<" is Pallindrome Number : \n";
    }
    else
    {
        cout<<iValue<<" is Not Pallindrome Number : \n";
    }

    return 0;
}