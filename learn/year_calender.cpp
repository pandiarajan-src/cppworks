#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const ushort no_of_days_in_months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const string name_months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
const string name_days[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

bool isLeapYear(ushort& year)
{
    bool isLeap = false;
    if((year % 100 != 0) && (year % 4 == 0))
        isLeap = true;
    else if((year % 100 == 0) && (year % 400 == 0) )
        isLeap = true;
    return isLeap; 
}

ushort printMonth(ushort& startDayOfMnth, ushort& noOfDays)
{
    ushort startOfWeek = startDayOfMnth-1;
    ushort startDate = 1;
    bool isMonthEnd = false;
    ushort start_of_nxt_month = 0;
    while(isMonthEnd == false)
    {
        ushort weekDates[7] = {0, 0, 0, 0, 0, 0, 0};
        for(ushort dateIndex = 0; dateIndex < 7; dateIndex++)
        {
            if(startOfWeek <= dateIndex && startDate <= noOfDays){
                weekDates[dateIndex] = startDate;
                std::cout << setw(5) << startDate;
                start_of_nxt_month = dateIndex;
                startDate++;
            }
            else
            {
                std::cout << setw(5) << " ";
            }
        }
        std::cout << std::endl;
        if(startDate > noOfDays)
            break;
        startOfWeek = 0;
    }
    return start_of_nxt_month+2;// add 2 - one for next day another for index calc
}

void printYearCalender(ushort& year, ushort& day)
{
    ushort index = 0;
    for(ushort days_in_month : no_of_days_in_months)
    {
        if(days_in_month == 28)//If the month is Feb then check for leap and decide the days
            if(isLeapYear(year))
                days_in_month++;
        std::cout << year << " : " << name_months[index] << "(" << days_in_month << ")" << std::endl;
        std::cout << "-----------------------------------"<<std::endl;

        for(string name_day : name_days)
        {
            std::cout << setw(5);
            std::cout << name_day;
        }
        std::cout << setw(0) << std::endl;

        day = printMonth(day,days_in_month);

        std::cout << "-----------------------------------" << std::endl;
        index++;
    }
}

int main()
{
    cout << "Enter a Year: ";
    ushort year{0};
    cin >> year;

    cout << "Enter the first day of the year [1-Sunday ... 7-Saturday] : ";
    ushort day{0};
    cin >> day;

    printYearCalender(year, day);

    return 0;
}