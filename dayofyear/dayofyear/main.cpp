#include<iostream>
#include<string>
#include"DayOfYear.h"
using namespace std;

int main()
{
	DayOfYear object;
	int day;
	cout << "This program converts a number \n" << "into a string representing the \n" << "month and day.\n\n";
	cout << "\nEnter a whole number between 1 and 365: ";
	cin >> day;
	object.setDay(day);
	object.print();
	return 0;
}