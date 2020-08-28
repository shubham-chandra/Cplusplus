#include <iostream>



int main()
{
	/*
	1.	A variable provide us with a named storage that our programs can manipulate.
	2.	Each variable has a specific type,which
												determines the size
												layout of the variables memory
												range of the values within that memory
												set of operations that can be applied to the variable.



	*/

	/*
	Lvalues and Rvalues

	1.Lvalues: An expression that is an lvalue may appear as either the left or right hand side of the assignment.
	2.Rvalues: An expression that is an rvalue may appear on the right but not on the left hand side of the assignment.

	Ex. lvalues : variables
		Rvalues :literal constants
	*/


	/*
	The name of a variable (identifier) is composed of letters,digits and underscore character.
	Identifiers are case sensitive.
	Must not be a C++ Keyword.

	convention : c++ uses this case for its own library implementations
	Cannot contain two consecutive underscore
	cannot begin with underscore followed by capital letter.
	*/
	


	/*
	Defining Objects:

	.Each definition starts with a type specifier, followed by a comma separated list of one or 
	more names. A semicolon terminates the definition.

	.A definition specifies the type of variable and it's identifier.

	.A definition may also provide an initial value.

	.C++ support two form of initialization:
		copy initalization and direct intialization

	.Initialization is not assignment.
	One is creating the variable other is erasing the memory content and writing new content in it.


	.The name of an object becomes visible immediately, and so it is possible to initialize a 
	subsequent variable to the value of one defined earlier in the same definition. 
	*/

	int ival(25); //direct initialization
	int ival2 = 25;	// copy initalization

	int val = 2 ,val2 = val*2; 

	std::cout << ival <<ival2 << val << val2 <<std::endl;

	return 0;
}