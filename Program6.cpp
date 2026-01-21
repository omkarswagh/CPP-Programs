// Problem Statement : Calculate Percentage

#include<iostream>
using namespace std;

float CalculatePercentage(int iTotal, float fMarks)
{
    float fPercentage = 0.0f;

     if(iTotal < fMarks || iTotal < 0 || fMarks < 0)
    {
        printf("Invalide Input\n");
        return fPercentage;
    }

    fPercentage = ((fMarks / (float)iTotal) * 100);
    return fPercentage;
}

int main()
{
    int iTotalMarks = 0;
    float fObtainedMarks = 0.0f;
    float fRet = 0.0f;

    cout<<"Enter Your Total Marks : \n";
    cin>>iTotalMarks;

    cout<<"Enter Your Obtained Marks : \n";
    cin>>fObtainedMarks;

    fRet = CalculatePercentage(iTotalMarks, fObtainedMarks);
    
    cout<<"Percentage is : "<<fRet<<"%\n";
    return 0;
}
