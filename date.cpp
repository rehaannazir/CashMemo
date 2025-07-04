#include <iostream>
#include "cashmemo.h"

Date::Date() : day(1), month(1), year(1000) {}
Date::Date(int d, int m, int y)
{
    if (m > 0 && m <= 12)
    {
        if (d > 0 && d <= 31 && m != 2)
        {
            this->day = d;
            this->month = m;
            this->year = y;
        }
        else if (d > 0 && d <= 28 && m == 2 && y % 4 != 0)
        {
            this->day = d;
            this->month = m;
            this->year = y;
        }
        else if (d > 0 && d <= 29 && m == 2 && y % 4 == 0)
        {
            this->day = d;
            this->month = m;
            this->year = y;
        }
        else
        {
            throw string("Kindly, put the valid date!");
        }
    }
    else
    {
        throw string("Kindly, put the valid month!");
    }
}
void Date::addDay()
{
    cout << "Enter day no: ";
    cin >> day;
}
void Date::addMonth()
{
    cout << "Enter month no: ";
    cin >> month;
}
void Date::addYear()
{
    cout << "Enter year: ";
    cin >> year;
}
Date Date::next()
{
    if (day > 0 && day < 30 && month != 2)
    {
        day++;
    }
    else if (day >= 30 && month < 12 && month != 2)
    {
        day = 1;
        month++;
    }
    else if (day >= 30 && month >= 12)
    {
        day = 1;
        month = 1;
        year++;
    }
    else if (day == 28 && month == 2)
    {
        day = 1;
        month++;
    }
    else if (day <= 27 && month == 2)
    {
        day++;
    }
    else if (day == 28 && month == 2 && year % 4 == 0)
    {
        day = 29;
    }
    else if (day == 29 && month == 2 && year % 4 == 0)
    {
        day = 1;
        month++;
    }
    else
    {
        throw string("Check your Date, it is INVALID!");
    }
}
ostream &operator<<(ostream &str, Date &rhs)
{
    switch (rhs.month)
    {
    case 1:
    {
        str << "Date: " << "January " << rhs.day << ", " << rhs.year;
        break;
    }
    case 2:
    {
        str << "Date: " << "February " << rhs.day << ", " << rhs.year;
        break;
    }
    case 3:
    {
        str << "Date: " << "March " << rhs.day << ", " << rhs.year;
        break;
    }
    case 4:
    {
        str << "Date: " << "April " << rhs.day << ", " << rhs.year;
        break;
    }
    case 5:
    {
        str << "Date: " << "May " << rhs.day << ", " << rhs.year;
        break;
    }
    case 6:
    {
        str << "Date: " << "June " << rhs.day << ", " << rhs.year;
        break;
    }
    case 7:
    {
        str << "Date: " << "July " << rhs.day << ", " << rhs.year;
        break;
    }
    case 8:
    {
        str << "Date: " << "August " << rhs.day << ", " << rhs.year;
        break;
    }
    case 9:
    {
        str << "Date: " << "September " << rhs.day << ", " << rhs.year;
        break;
    }
    case 10:
    {
        str << "Date: " << "October " << rhs.day << ", " << rhs.year;
        break;
    }
    case 11:
    {
        str << "Date: " << "November " << rhs.day << ", " << rhs.year;
        break;
    }
    case 12:
    {
        str << "Date: " << "December " << rhs.day << ", " << rhs.year;
        break;
    }
    default:
    {
        throw string("Put the valid Month Number!");
    }
    }
    return str;
}

istream &operator>>(istream &str, Date &rhs)
{
    cout << "Enter Day No / Month No / Year" << endl;
    str >> rhs.day >> rhs.month >> rhs.year;
    return str;
}
