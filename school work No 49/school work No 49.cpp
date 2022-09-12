// school work No 49.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <boost/algorithm/string.hpp>
using namespace boost::algorithm;
using namespace std;

int main()
{
	int number;
	string number;
	
	
	cout << "enter the sequence of numbers ending in zeros";
	cin >> number;

	cout << number[rand() %  number.length()] <<
		number[rand() % number.length()] <<
		number[rand() % number.length()] <<
		number[rand() % number.length()] <<
		number[rand() % number.length()] <<
		number[rand() % number.length()] <<
		number[rand() % number.length()] <<




}


