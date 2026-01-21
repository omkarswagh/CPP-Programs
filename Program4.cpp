// Problem Statement : Accept value from user and calculate the cube.

#include<iostream>
using namespace std;

long int CalculateCube(int iNo)
{
    long int iCube = iNo * iNo * iNo ;
    return iCube;
}

int main()
{
    int iValue = 0;
    long int iRet = 0;

    cout<<"Enter the number to calculate Cube : \n";
    cin>>iValue;

    iRet = CalculateCube(iValue);
    cout<<iValue<<"  cube is "<<iRet;

    return 0;
}