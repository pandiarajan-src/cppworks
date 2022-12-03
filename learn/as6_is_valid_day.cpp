/*
    Purpose:
        To find whether the given input day is valid
        1-Sun ... 7-Sat
        If given input is not between 1 to 7 then return not valie
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a valid day between 0-Sun, 1-Mon ... 7-Sat : ";
    ushort day {0};
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Its Sunday" << endl;
        break;
    case 2:
        cout << "Its Monday" << endl;
        break;
    case 3:
        cout << "Its Tuesday" << endl;
        break;
    case 4:
        cout << "Its Wednesday" << endl;
        break;
    case 5:
        cout << "Its Thursday" << endl;
        break;
    case 6:
        cout << "Its Friday" << endl;
        break;
    case 7:
        cout << "Its Saturday" << endl;
        break;
    default:
        cout << "Its Not a valid day" << endl;
        break;
    }
    return 0;
}