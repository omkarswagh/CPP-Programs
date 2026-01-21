// Find Minimum

#include<iostream>
using namespace std;

int Minimum(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        return iNo2;
    }
    else
    {
        return iNo1;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout<<"Enter First Number : \n";
    cin>>iValue1;

    cout<<"Enter Second Number : \n";
    cin>>iValue2;

    iRet = Minimum(iValue1, iValue2);

    cout<<"Minimum Number is : "<<iRet;

    return 0;
}