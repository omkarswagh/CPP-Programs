
// Write a program that accepts the standard (class) number of a student as input 
// and displays the exam time according to the following schedule:

// | Standard | Exam Time   |
// |----------|-------------|
// | 1        | 8 AM        |
// | 2        | 9 AM        |
// | 3        | 10 AM       |
// | 4        | 11 AM       |
// | 5        | 12 NOON     |

#include<iostream>
using namespace std;

void DisplayClass(int iStandard)
{
    switch(iStandard)
    {
        case 1:
        cout<<"Your Exam At 8AM...\n";
        break;

        case 2:
            cout<<"Your Exam At 9AM...\n";
        break;
        
        case 3:
            cout<<"Your Exam At 10AM...\n";
        break;

        case 4:
            cout<<"Your Exam At 11AM...\n";
        break;

        case 5:
            cout<<"Your Exam At 12PM...\n";
        break;

        default:
            cout<<"Wrong Input";

    }
}

int main()
{
    int iClass = 0;

    cout<<"Enter your Class : \n";
    cin>>iClass;

    DisplayClass(iClass);

    return 0;
}
