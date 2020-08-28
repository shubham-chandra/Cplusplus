#include <iostream>


int main(){

	/*

	Primitive type 	 :->	1.Arithmetic type
							2.Void

	Arithmetic Types :->	1.Integers
							2.Floating Point
							3.character
							4.Boolean


	Integral Types 	 :->	1.Integer
							2.character
							3.Boolean

	Floating Point 	 :->	1.float (one word)
							2.double (two word)
							3.long double (three or four word)


	Integer Type 	 :->	1.short (usually half machine word)
							2.int ( "" 1 machine word)
							3.long ("" 1 or 2 machine word)

	character Types	 :->	1.char
							
							2.wchar_t

	Integral Type(except boolean) :->	1.signed
										2.unsigned

	char 			 :->	1.plain char
							2.signed char
							3.unsigned char

	

	signed:		can represent both negative and positive numbers

	unsigned : 	can represent only values greater than or equal to zero


	void:	1.	No associated value
			2.	Usually uses as return type of function 
				with no return.

	bool:	1.	represent truth values, true or false

	char :  1. 	Guaranteed to be big enough to hold numeric
				values that correspond to any character in 
				machine's basic character set.

			2.	Usually single machine byte.
	
	wchar_t:
			1.	Used for extended character sets such as chinese.


	*/


	/*We can assign any of the arithmetic types to bool. An arithmetic
	 type with value 0 yields a bool that holds false. Any nonzero value is treates as true.*/
	bool a,b,c,d,e,f,g,h;
	a = 0;
	b = -96;
	c = 0.0;
	d = 0.02;
	e = 'a';
	f = '\0';
	g = true;
	h = false;

	std::cout << a << b << c << d << e << f << g << h << std::endl;

	/****************************************************************************************/

	/*
	Fact:
	1.	The integers short,int,long are all signed by default.
	2.	The char type is be represented in only two ways : signed char or unsigned char
		The default representation is varied by computer.
	*/

	/*
	What happens when one tries to assign a value outside the allowable range to an object of given type:
	Ex: char a (assuming signed, can hold -128 to 127)
		a = 128  (Then what hapens?)

	For unsigned type: compiler adjust he value to fit in the the variable by taking the values modulo to the variable size.
	for signed type : the behaviour is undefined , the compiler specifies wht to do.
	*/

	unsigned char i;
	i = 257;
	std::cout << (int)i <<std::endl; // 257%256 = 1 

	i = -1;
	std::cout << (int)i << std::endl; // -1 % 256 = 255

	/********************************************************************************************/

	return 0;
}