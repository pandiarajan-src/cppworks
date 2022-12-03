/*
    Purpose:
        To find whether the given year is leap year or not.
        Leap year is:
            a year is divided by 4 exactly
            a year is NOT divided by 100 but divided by 400

*/

#include <iostream>

using namespace std;

bool isLeapYear(ushort& year)
{
    bool isLeap = false;
    if((year % 100 != 0) && (year % 4 == 0))
        isLeap = true;
    else if((year % 100 == 0) && (year % 400 == 0) )
        isLeap = true;
    return isLeap; 
}

int main()
{
    cout << "Enter the year: ";
    ushort year {0};
    cin >> year;

    cout << "Is year " << year << " a leap year? - Ans: " << (isLeapYear(year) ? "Yes" : "No") << std::endl;
}

