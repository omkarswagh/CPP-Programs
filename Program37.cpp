#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
   {
        cout<<"---------------------------------------------\n";
        iDigit = iNo % 10;
        cout<<"Value of iDigit is : "<<iDigit<<"\n";
        iNo = iNo / 10;
        cout<<"Value of iNo is : "<<iNo<<"\n";
   }


}

int main()
{
    int iValue = 721;

    Display(iValue);

    return 0;
}