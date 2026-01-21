// Problem Statement : Accept radius from user and calculate the area of circle

#include<iostream>
using namespace std;

float CalculateArea(float fRadi)
{
    float const PI = 3.14f;
    float fArea = 0.0f;
    fArea = PI * fRadi * fRadi;
    return fArea;
}

int main()
{
    float fRadius = 0.0f;
    float fRet = 0.0f;

    cout<<"Enter the value of Radius : \n";
    cin>>fRadius;

    fRet = CalculateArea(fRadius);
    cout<<"Area of Circle is : "<<fRet;
    return 0;
}