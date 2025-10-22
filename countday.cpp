#include <iostream>
#include <cmath> // for abs()

using namespace std;

// Check if year is a leap year
bool isLeap(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Number of days in all months (Jan to Dec)
int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// Function to count number of days from 01/01/0000 to given date
int countDays(int d, int m, int y)
{
    long int days = y * 365 + d;

    // Add days for months in current year
    for (int i = 0; i < m - 1; i++)
    {
        days += monthDays[i];
    }

    // Add leap years
    int leapYears = y / 4 - y / 100 + y / 400;

    // If current year is a leap year and date is after Feb, add 1 more day
    if (m > 2 && isLeap(y))
    {
        days += 1;
    }

    days += leapYears;

    return days;
}

int main()
{
    int d1, m1, y1;
    int d2, m2, y2;

    cout << "Enter first date (DD MM YYYY): ";
    cin >> d1 >> m1 >> y1;

    cout << "Enter second date (DD MM YYYY): ";
    cin >> d2 >> m2 >> y2;

    // Get total days from 0 for both dates
    int days1 = countDays(d1, m1, y1);
    int days2 = countDays(d2, m2, y2);

    cout << "Days between: " << abs(days2 - days1) << " days" << endl;

    return 0;
}
