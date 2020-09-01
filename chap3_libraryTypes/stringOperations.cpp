#include <iostream>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){

/*
string size and empty operation
*/
string st("My name is shubham");

cout << "The size of string is " << st.size() <<endl;

cout << "Is string empty " << st.empty() << endl; 

/*
The size() operation return an integer of type 
string::size_type   // internally its jst an unsigned int
This type is capable of holding the largest string length possible.

We should always use this type to store information returned from size() operation

*/

/*
string Relational operator:

1.	string class defines operator that compare strings.

They operate by comparing each character of string.

*/

string s1 = "small",s2 = "big";

cout << (s1 > s2)<< endl;  // it compares character 's' and 'b'
					// since asci value of 's' is greater than 'b'
					// string s1 is grater than s2 .if there were equal then 
					// next characters would be compared.


/*
Adding two strings

1.	Addition is defined as concatenation
2.	It can be done using +,=+. 
*/

string s3 = s1 + s2;

cout << s3<< endl;

s3 += s2;

cout << s3 << endl;


/*
Adding character string literals and strings

1.	when mixing string and string literal , atleast one operand of 
	+ should be string type. 

2. The string library defines addition + ,to return a string ,so we 
	chain the + operations.
*/

s3 = s1 + " ok " + s2;

cout << s3 << endl;

/*
Fetching a character from string

1.	string type uses [] operator to access character in the string.
2.	it takes size_type as an input to [] operator.
3.  the subscript [] , returns a lvalue ,which we can set form our side.
4.	Any expression that result in an integral value can be used for subscripting.
*/
for (string::size_type i = 0; i < s3.size(); ++i)
{
	cout << s3[i] << endl;
	s3[i] = '*';
}
cout << s3 << endl;

/*
the library cctype  {first 'c' => library taken from C. In C,its name would be ctype (character type) }
defines nany functions to check about characters.
like it is lower,upper, alpha,digit etc.

*/

return 0;
}