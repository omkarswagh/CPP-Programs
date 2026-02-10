#include<iostream>
using namespace std;

void DisplayPattern(int iRow, int iCol)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    int i = 1;

    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
        {
            if((iCnt1 >= iCnt2))
            {
                printf("%d\t",i);
                i++;
            }
            else
            {
                printf(" \t");
            }
        }

        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter the count of Row : \n";
    cin>>iValue1;

    cout<<"Enter the count of Coloumn : \n";
    cin>>iValue2;

    DisplayPattern(iValue1, iValue2);

    return 0;
}