
// Accept one number from user and display factors in Decreasing order

#include<iostream>
using namespace std;

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }

    for(iCnt = iNo/2; iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
          cout<<iCnt<<"\t";  
        }
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the Number  : \n";
    cin>>iValue;

    DisplayFactor(iValue);

    return 0;
}
