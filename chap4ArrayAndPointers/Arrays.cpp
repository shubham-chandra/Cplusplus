#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void printArray(int a[],int size){
	for (int i = 0; i < size; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}


int main(){

	/*
	1.	Arrays are data structure that are built into the language.
	2.	Array is a container of objects of a single data type.
	3.	Then dont offer many of the functionality of Vector.
		As they are.  Fixed size, no size operation , no push_back.

	4.	Array is a compound data type, that consist of:
		type specifier => in built data type or class type except refrences,
		identifier,
		dimension.	

	5.	There are no array of Refrences.
	*/


	/*
	Defining and Initializing Arrays:

	1.	The dimention must be a constant expression, with value >=1.
	2.	const expression =>
		integer literal constants
		enumerators
		const objects of integral type initialized with const expession


	*/

	//const expressions
	const unsigned buf_size =   512, max_files = 20;
	int staff_size = 27;

	//int salaries[staff_size]; //Error : staff_size is known only at run time
	char input_buff[buf_size];  // oK


	/*
	Explicity initializing Array Elements:

	we can provide comma separated list of initializers enclosed in parantheses
		
	If we dont provide the initializers , then the element of arrays are initialzed according to initialization rules.

	*/

	int ia[3] = {0,1,2};

	/*
	An explicitly initialized array need not specify a dimension value.
	The compiler will infer at compile time.

	If dimension are specified then the number of initializer must not exceed the size.

	if dimension is greater than the initializers' length then the remaining element are initialized to zero or default constructor
	*/

	int ia1 [] = {2,3,4};

	int ia2[5] = {3,6,9};

	printArray(ia2,5); // 3 6 9 0 0

	/*
	character arrays:
	character arrays are special, they can be initialized with:

	either a set of comma separated character literal enclosed in braces.
	or a string literal
	
	when we create a character array with string literal, the null character is also inserted into the array.


	*/

	char ca1[] = {'C','+','+'};
	char ca2[] = {'C','+','+','\n'};
	char ca3[] = "C++";

	// ca2, ca3 are essentially same

	/*
	There is no copy or assignment operator for arrays.
	You have to do it old fashioned way.
	We can subscript its elements which provide a lvalue.

	The right type to index an array is size_t.
	*/
	size_t index = 0;
	cout << ca3[index] << endl;
	return 0;
}