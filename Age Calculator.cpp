// Age Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.

// This program asks user for input on their name, and year they were born in the format of 18xx,19xx or20xx. it then uses local time function to calculate how old they are right now.
//      Message prints alongside their name and age


#define _CRT_SECURE_NO_WARNINGS //was getting an runtime error for using localtime. many forums suggested putting this here to bypass that-
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main()
{
	time_t epSecs;					// Seconds since epoch
	tm* pCalTime;					// Pointer to calender time
	epSecs = time(NULL);			// Seconds since epoch
	pCalTime = localtime(&epSecs);	// Convert to local time
	string Name;					// string hold users name input
	int Year;						// assigns year to hold the users input on what year they were born

	// Ask for the user's name and year of bith
	cout << "What is your name?: ";
	cin >> Name;
	cout << "Enter your year of birth in on of the three formats.\n"
		<< "18XX, 19XX, or 20XX: ";
	cin >> Year;

	// Greet the user by name and declare the user's age in years.
	cout << "Hi! " << Name << ", you are " << ((1900 + pCalTime->tm_year) - Year) << " years old." << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


