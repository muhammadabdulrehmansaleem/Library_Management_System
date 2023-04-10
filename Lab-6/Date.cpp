#include <iostream>
#include "Date.h"
using namespace std;
Date::Date()
{
	day = 0;
	month = 0;
	year = 0;
}
Date::Date(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}
void Date::SetDate(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}
Date& Date::getDate()
{
	return *this;
}
Date& Date::operator=(const Date& a)
{
	day = a.day;
	month = a.month;
	year = a.year;
	return *this;
}
void Date::display()
{
	cout << day << "-" << month << "-" << year;
}