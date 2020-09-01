#include <iostream>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
/*
1.	string type support variable length character strings.

2.	The library takes care of managing the memory required 
	for storing string and provide various features.

3.	strings are contained in library. #include<string>

*/

/*
Defining and initializing strings:

1.	A constructor is a special member function that defines
	how objects of that type can be initialized.



*/

string s1;				// Default constructor
string s2("shubham"); 	// Initialize as copy of string literal
string s3(s2); 			// Initialize as copy of string s2
string s4(5,'s'); 		// Initialize as 5 copies of character 's'
string s5("chandra",2);	// Initialize first 2 char from "chandra"

string s6 = "is good"; 	// Assignment not initialization


cout << s1 <<s2 << s3 << s4 << s5 << s6<< endl;


/*
Reading and writing string

1. The string input operator:
	reads and discard nay whitespace(eg: spaces,newlines,tabs)
	It then reads character unitl next whitespace character is encountered.


*/
cin >> s1;  			// Read whitespace separated string into s1

cout << s1 << endl;


/*
Read an unknown number of strings:

It will stop taking input when end of file is encountered.
CTRL-D in windows.
*/
while(cin >>s1){

cout << s1 << endl;
}

/*
Use getline to read an entire line:
getline(cin,s1)
excludes newline, preserves spaces before and after string.
*/


return 0;

}