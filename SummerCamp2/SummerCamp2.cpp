// SummerCamp2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int Month;
	int December = 12;
	int January = 1;
	int February = 2;
	int March = 3;
	int April = 4;
	int May = 5;
	int June = 6;
	int July = 7;
	int August = 8;
	int September = 9;
	int October = 10;
	int November = 11;

	std::cout << "Write the number of a month." << std::endl;
	std::cin >> Month;

	if (Month == December)
	{
		std::cout << "31 days are in December" << std::endl;
	}
	
	if (Month == January)
	{
		std::cout << "31 days are in January" << std::endl;
	}

	if (Month == February)
	{
		std::cout << "28 days are in February" << std::endl;
	}

	if (Month == March)
	{
		std::cout << "31 days are in March" << std::endl;
	}

	if (Month == April)
	{
		std::cout << "30 days are in April" << std::endl;
	}

	if (Month == May)
	{
		std::cout << "31 days are in May" << std::endl;
	}

	if (Month == June)
	{
		std::cout << "30 days are in June" << std::endl;
	}

	if (Month == July)
	{
		std::cout << "31 days are in July" << std::endl;
	}

	if (Month == August)
	{
		std::cout << "31 days are in August" << std::endl;
	}

	if (Month == September)
	{
		std::cout << "30 days are in September" << std::endl;
	}

	if (Month == October)
	{
		std::cout << "31 days are in October" << std::endl;
	}

	if (Month == November)
	{
		std::cout << "30 days are in November" << std::endl;
	}

	system("pause");
    return 0;
}

