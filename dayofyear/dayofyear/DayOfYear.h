#ifndef DayOfYear_H
#define DayOfYear_H
#include<string>
using namespace std;

class DayOfYear
{
private: int day;
public:
	static int daysAtEndOfMonth[];
	static string monthName[];
	void print();
	void setDay(int day)
	{
		this->day = day;
	}

};
#endif