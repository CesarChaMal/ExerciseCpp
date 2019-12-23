// Exercise.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int main(int nNumberofArgs, char* pszArgs[])
{
	// the outer loop
	std::cout << "This program sums multiple series\n"
		<< "of numbers. Terminate each sequence\n"
		<< "by entering a negative number.\n"
		<< "Terminate the series by entering two\n"
		<< "negative numbers in a row\n";
	// continue to accumulate sequences
	int accumulator;
	for (;;)
	{
		// start entering the next sequence
		// of numbers
		accumulator = 0;
		std::cout << "Start the next sequence\n";
		// loop forever
		for (;;)
		{
			// fetch another number
			int nValue = 0;
			std::cout << "Enter next number: ";
			std::cin >> nValue;
			// if it's negative...
			if (nValue < 0)
			{
				// ...then exit
				break;
			}
			// ...otherwise add the number to the
			// accumulator
			accumulator += nValue;
		}
		// exit the loop if the total accumulated is 0
		if (accumulator == 0)
		{
			break;
		}
		// output the accumulated result and start over
		std::cout << "The total for this sequence is "
			<< accumulator << std::endl << std::endl;
	}
	// wait until user is ready before terminating program
	// to allow the user to see the program results
	std::cout << "Press Enter to continue..." << std::endl;
	std::cin.ignore(10, '\n');
	std::cin.get();

	int x = 0;
	int *p_int = &x;
	int **p_p_int = &p_int;
	*p_int = 12;
	**p_p_int = 25;
	*p_int = 12;
	**p_p_int = 3;
	**p_p_int = 27;

	return 0;
}