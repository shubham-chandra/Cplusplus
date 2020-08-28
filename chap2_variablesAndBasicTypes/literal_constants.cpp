
#include <iostream>


int main(){


	/*
		1.	A value such as 42,5.3,'a' , in a program is known as literal constant: Literal 
		because we can speak of it only in terms of its value.

		2.	Every literal has an associate type:
		0 	=> 	int
		1.2 =>	double
	
		3. Literals exist only for built in type. No literals for class type => so not for library types also. 



	*/


	/*
	Integer Literals:

		1.Can be written in three ways:
			1. 20  	\\decimal
			2. 024 	\\octal
			3. 0x14 \\ Hexadecimal
		
		2.by default integer literal constant is either int or long.
			if the value can fit in int, then int it is, otherwise it is long.

		3.By adding a suffix we can force the type of integer literal to be type long ,unsigned long,unsigned etc.
			u/U =>unsigned
			l/L => Long

			126u => unsigned
			1L => long
			126UL => unsigned long

		4.No literal of type short.

	*/

	int a,b,c,d;
	a = 20;
	b = 024;
	c = 0x14;
	d = -1U;			// d = -1  U is applied to 1 only... - sign is acting as a operator ... no such thing as negative literal.

	std::cout << a <<" "<< b << " " << c <<" "<< d <<std::endl;

	/*
	Floating point literal:
		1.can be written using two ways
			1. 8.345 //common decimal notation
			2. 1E-3  //Scientific notation

		2.By default, floating literals are of type double.

		3.We can change it to single precision by suffix f/F or extend it with suffix l/L.
			3.14215f
			0e0L
	*/

	/*
	Boolean  literals:
		1. The words true and false are literals of type bool.
	*/
	bool e,f;
	e = true;
	f = false;

	/*************************************************************************************/

	/*
	Character literals:
		1. Printable characters literals are written by enclosing the character within single quotation marks
			'a'  '2'   ','   ' ' // blank character
			They are of type char.

		2. We obtain wide character literal of type wchar_t by preceeding literal with L.
			L'a'  L'2' L',' L' '


	*/

	char ch_a = 'a';
	wchar_t wch_a = L'a';
	std::cout << ch_a << " " << wch_a << std::endl;

	/*************************************************************************************/ 


	/*
	Escape sequence for non printable characters:
		1.A nonprintable character is a character for which there is not visible image ex. backspace ,control character.
		2.Other characters have special meaning in the language, ex single quote, double quote,backslash.

		3.Nonprintable characters and special characters are written using escape sequence.
			ex. \n (newline)
				\v (vertical tab)

		4.We can write any character as a generalized escape sequence in the form:
			\ooo   \\  ooo is octal representation of underlying digit
			\xddd	\\ ddd is hexadecimal representaton of underlying digit.

			ex. \0  (null)
				\12 (newline) 

	*/

	char ch_b = '\056';
	char ch_d = '\x72';
	std::cout << ch_b << ch_d << std::endl;

	/**************************************************************************************/


	/*
	Character string literal:
		1. String literals is an additional literal aside primitive literal.
		2. They are arrays of CONSTANT chars.

		3.written as zero or more characters enclosed in double quotation marks

			"Hello World"			//simple string literal
			""						//Empty string literal
			"\nCC\toptions\tfile\n"	

		4.Every string literal end with a null character
			'A'  => single character
			"A"  => Array of two characters ['A','\0']

		5.Wide string literal
			L"Hello World"
			follows all points above of normal string literal.

	*/



	/*
	Concatenated String(or Wide) Literal
		1.Two string (or wide) character literals separated by SPACE,TAB,NEWLINE 
		are concatenated into a single new string(or wide) literal.

		2.Concatenation of string and wide literal is UNDEFINED.
	*/

	std::cout << "My name is " "shubham"<<std::endl;
	/**************************************************************************************/

	/*
	Multiline literals

	putting a backslash as the last character on a line causes that line and next to be treated as single line.
	*/

	std::cout
	<< "Continues line\
	like this " << std::endl;


	return 0;
}