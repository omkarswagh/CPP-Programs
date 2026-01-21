// Find Maximum from 3 number 

#include<iostream>
using namespace std;

int Maximum(int iNo1, int iNo2, int iNo3)
{
    if((iNo1 >= iNo2) && (iNo1 >= iNo3))
    {
        return iNo1;
    }
    else if((iNo2 >= iNo1) && (iNo2 >= iNo3))
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }  
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    cout<<"Enter First Number  : \n";
    cin>>iValue1;

    cout<<"Enter Second Number  : \n";
    scanf("%d",&iValue2);

    cout<<"Enter Third Number  : \n";
    cin>>iValue3;

    iRet = Maximum(iValue1,iValue2,iValue3);

    cout<<"Maximum is : "<<iRet;

    return 0;
}