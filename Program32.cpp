#include<iostream>
using namespace std;

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            cout<<iCnt<<"\n";
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the Number : \n";
    cin>>iValue;

    iRet = SumFactors(iValue);

    cout<<"Sum of All Factors of "<<iValue<<" is "<<iRet;

    return 0;
}

// Time Complexity : O(N/2);