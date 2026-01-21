// Calculate Average

#include<iostream>
using namespace std;

float Average(int iNo1, int iNo2, int iNo3)
{
    float fAvg = ((float)(iNo1 +iNo2 + iNo3) / 3);
    return fAvg;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    float fRet = 0.0f;

    cout<<"Enter First Number  : \n";
    scanf("%d",&iValue1);

    cout<<"Enter Second Number  : \n";
    scanf("%d",&iValue2);

    cout<<"Enter Third Number  : \n";
    scanf("%d",&iValue3);

    fRet = Average(iValue1,iValue2,iValue3);

    cout<<"Average is : "<<fRet;

    return 0;
}