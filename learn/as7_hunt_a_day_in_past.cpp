/*
    Purpose:
        To find which day in the past from today. 
        1-Sun ... 7-Sat
        If given 2 input : (1) current date & (2) how many days back we have look back.
        output : which day in the past of (2) input
*/

#include <iostream>

using namespace std;

bool print_day(const ushort& day)
{
    bool isValid = true;
        switch (day)
    {
    case 1:
        cout << "Sunday" << endl;
        break;
    case 2:
        cout << "Monday" << endl;
        break;
    case 3:
        cout << "Tuesday" << endl;
        break;
    case 4:
        cout << "Wednesday" << endl;
        break;
    case 5:
        cout << "Thursday" << endl;
        break;
    case 6:
        cout << "Friday" << endl;
        break;
    case 7:
        cout << "Saturday" << endl;
        break;
    default:
        cout << "Not a valid day" << endl;
        isValid = false;
        break;
    }
    return isValid;
}

int main()
{
    cout << "Enter a current day between 0-Sun, 1-Mon ... 7-Sat : ";
    ushort day {0};
    cin >> day;
    cout << endl << "How many days you want to look back? : ";
    ushort back_day {0};
    cin >> back_day;

    bool isValid {true};
    cout << "Today is "; 
    isValid = print_day(day);
    if(isValid)
    {
        cout << back_day << " days back is ";
        int back_day_to_check = day - (back_day % 7);
        if(back_day_to_check < 0 )
            back_day_to_check += 7;
        print_day(back_day_to_check);

    }

    return 0;
}