// Accept one number from user and check it is divisible by 5 or not

#include<iostream>
using namespace std;

bool Display(int iNo)
{
        if((iNo % 5) == 0)
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

    cout<<"Enter the Number : \n";
    cin>>iValue;

    bRet = Display(iValue);

    if(bRet == true)
    {
        cout<<iValue<<" is divisible by 5";
    }
    else
    {
        cout<<iValue<<" is Not Divisible by 5";
    }

    return 0;
}