#include <iostream>


int main(){

	/*
	1.	A reference serve as an alternative name for an object.

	2.	A reference is a compound type that is defined by preceding the variable name with & symbol.
	
	3.	Each reference type "refers to" some other type. We CANNOT define a reference to refernce type.

	4.	A reference must be initialized using the OBJECT of same type as the reference.
	*/

	int ival = 1024;		// Ok
	int &refVal = ival;		//ok

	//int &refVal2;			//	Error : not initalized
	//int &refVal3 = 10		//Error : initialized must be a object


	/*
	
	1.	Once defined a reference can be used as just as a variable.
	
	2.When a reference is initialized, it remains bound to that objectas long as the reference exists.There
	is no way to rebind a reference to a diferent object.

	*/

	refVal = 20;
	std::cout << refVal << std::endl;

	/*
	Const reference:

	1.	A const reference is a reference that MAY refer to a const object.
	*/

	const int val = 10;
	const int &rval = val;  // const reft to const variable

	//rval = 20; //Error : cannot reassign const refrence variable

	int val2 = 30;
	const int &rval2 =val2; // const ref to non const variable

	//rval2 = 20;	// Error: connot reassign to const reference variable


	//int &ref3 = val; // Error : non const ref to const ref variable


	/*
	
	A const reference can be initialized to an object of a different but RELATED type or to an rvalue such as literal constant

	*/

	double dval  = 3.14;
	const int &rdval = dval;   //ok but value get truncated when used by ref
	/*
	behind the scene
	int temp = dval;
	const int &rdval = temp;

	if they allowed this for non const ref then changing the ref will change temp , but not the dval
	*/
	const int &rdval2 = 10;		//allowed only for const reference variables

	std::cout << rdval <<" "<< rdval2<< std::endl;   // print 3


	return 0;
}