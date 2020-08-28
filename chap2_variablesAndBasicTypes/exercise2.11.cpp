/*
Write a program that prompts the user to input two numbers
,the base and exponent. Print the result of raising the base
to the power od exponent.

*/

#include <iostream>

int main()
{
	int base,exponent,result;
	std::cout << "Enter the base: ";
	std::cin >> base;
	std::cout << "Enter the exponent: ";
	std::cin >> exponent;

	result = 1;

	for (int i = 0; i < exponent; ++i)
	{
		result*=base;
	}

	std::cout << "The result is "<< result <<std::endl;

	return 0;
}