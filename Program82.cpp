#include<iostream>
using namespace std;

class Number
{
    private :
        int No;
    
    public :
        Number(int X)
        {
            No = X;
        }

        int factorial()
        {
            int iCnt = 0;
            int iFact = 1;

            for(iCnt = 1; iCnt <= No; iCnt++)
            {
                cout<<iCnt<<"\t";
                iFact = iFact * iCnt;
            }
            return iFact;
        }
};

int main()
{
    int iValue = 0, iRet = 0;
    
    cout<<"Enter the Number : \n";
    cin>>iValue;

    Number *nobj = new Number(iValue);
    iRet = nobj->factorial();

    cout<<"\nFactorial of "<<iValue<<" is "<<iRet;
    return 0;
}