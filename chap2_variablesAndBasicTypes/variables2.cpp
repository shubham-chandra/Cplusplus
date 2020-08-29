#include <iostream>




int a;
char c;
double d;
bool b;
int main(){

/*
Variable initalization rules:
when we define a variable without initializer, the system some time intializes for us:


	Builtin-Types : if global then initialize to 0.
					if defined inside function then they remain uninitialized.

	Class 		  : The default constructor defines what to do for uninitialized class variables.

					if we dont provide a default constructor then every definition o the class variable MUST BE explicitly
					initialized. It is not possible to define variables of such type without giving an initial value. 
*/
	std::cout << a << " " << b<< " " << (int)c << " " << d << std::endl; 

/*
Declarations and Definition:

	.C++ programs are divided into many files. For multiple files to access same variable, 
	C++ distinguishes between declaration and definition.

	:: A definition of a variable allocates storage for the variable and may also specify an initial value for the variable.
		There must be ONE and  ONLY ONE definition of a variable in program.

	:: A declaration makes the type and name of the variable to the program. A definition is also a declaration.


	We can declare a variable without defining it by using the "extern" keyword.

	extern int i  //declaration
	int i 			// declare plus define

	An extern say that the definition exist somewhere else in the program.

	A variable can be declared many times in a program, but it is defined only once.

	A declaration may include an initializer  ONLY if it is also a definition.

	extern int i = 10  // a definition

	An extern can only include initializer if it occurs outside any function. 
*/


/*
Scope of a Name:

1.	The context used to distinguish  the meaning of names  is a scope. A scope is a region of the program.

2.	Names are visible from point of declarations untill the end of scope.

3.	Names defined outside anu function have global scope.

4.	Names defined inside functions are local scope.

5. 	Names define inside statement like for loop variable are statement scope. 
*/	
return 0;
}