// Accept Number from user and Check wheather number is perfect number or not.

#include<iostream>
using namespace std;

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    //      1               2       3
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)   // 4
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{   
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the number : \n";
    cin>>iValue;
    
    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {
        cout<<iValue<<" is a perfect number\n";
    }
    else
    {
        cout<<iValue<<" is Not a perfect number\n";
    }
    
    return 0;
}

// Time Complexity : O(N/2)

