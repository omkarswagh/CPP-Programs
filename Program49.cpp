
// Accept one number from user and display all non Factors

#include<iostream>
using namespace std;

void DisplayNonFactor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
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

    DisplayNonFactor(iValue);

    return 0;
}
