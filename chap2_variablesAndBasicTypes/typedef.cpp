#include <iostream>


int main(){


	/*
	typedef let us use a synonym for a type

	can be used anywhere in the program where a type name can appear
	*/

	typedef float time;

	time sunset = 7.01;
	time sunrise = 5.0;

	std::cout << sunset << sunrise << std::endl;
}