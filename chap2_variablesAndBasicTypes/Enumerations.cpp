#include <iostream>

int main(){


	/*
	1.	Enumeration provide a method of defining and grouping a set of Intergral constants

	2.	Defined using the enum Keyword, followed by OPTIONAL enumeration name , and a comma separated
		 list of enumerators enclosed in braces:

	3.	By default , the first enumerator is assigned 0, each subsequent value assigned one grater than previous

	4.	We may suppy one of more enumerator an initial value. The value must be constant expression (can be evaluated at compile time)
		ex : const variable, literal constant
	
	5. It is not possible to change the value of an enumerator
	*/

	enum open_modes{
		input,		//	0
		output,		//	1
		append		//	2
	};

	enum shape{
		shape1,		//	0
		shape2 = 5,	//	5
		shape3		//	6
	};

	std::cout << input << output << append << shape1 << shape2 << shape3 << std::endl;

	/*
	Each enum defines a new type , so we can define and initialize object of type shape.

	An object of enumeration type may be initialized or assigned only by one of its 
	enumerators or by another object of the same enumeration types.
	*/

	shape shape4 = shape1; // Ok
	//shape shape5 = 5;// Errror
	shape4 = shape2; // Ok

}