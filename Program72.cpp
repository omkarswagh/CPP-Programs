// display below pattern 
// * * * * * # # # # # 

#include<iostream>
using namespace std;

class Pattern
{
    private:
        int iNo;

    public:
        Pattern(int A)
        {
            iNo = A;
        }

        void patternDisplay()
        {
            int iCnt1 = 0, iCnt2 = 0;

            for(iCnt1 = 1; iCnt1 <= iNo; iCnt1++)
            {
                cout<<"*\t";
            }

            for(iCnt2 = 1; iCnt2 <= iNo; iCnt2++)
            {
                cout<<"#\t";
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the Number : \n";
    cin>>iValue;

    Pattern *pobj = new Pattern(iValue);
    pobj->patternDisplay();

    delete pobj;

    return 0;
}