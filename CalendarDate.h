#pragma once
#include <iostream>

using namespace std;

class CalendarDate
{
private:
	size_t day;
	size_t month;
	size_t year;
	static size_t getDigit(char c);
	static bool isDigit(char c);
	static bool isLeapYear(size_t year);
	
public:
	CalendarDate();
	//YYYY-MM-DD
	CalendarDate(const char* date);
	
	bool operator< (const CalendarDate& rhs) const;
	bool operator> (const CalendarDate& rhs) const;
	bool operator>= (const CalendarDate& rhs) const;
	bool operator<= (const CalendarDate& rhs) const;
	bool operator== (const CalendarDate& rhs) const;
	bool operator!= (const CalendarDate& rhs) const;
	
	static bool isValid(const char* date);
	
	friend std::ostream& operator<< (std::ostream& out, const CalendarDate& other);
	friend std::istream& operator>> (std::istream& in, CalendarDate& other);
	
	static CalendarDate getDateToday();
	static bool areOverlapping(const CalendarDate& dateStart1, const CalendarDate& dateEnd1, 
								const CalendarDate& dateStart2, const CalendarDate& dateEnd2);
	
};
