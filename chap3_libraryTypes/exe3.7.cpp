#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

/*
Read two string and compare them and their lengths and report them.
*/

int main(){

	string s1;
	string s2;

	cin >> s1 >> s2;

	if(s1 > s2){
		cout << "The string " << s1 << " is greater than " << s2 << endl;
	}
	else if(s2 > s1){
		cout << "The string " << s2 << " is greater than " << s1 << endl;
	}
	else{
		cout << "The string " << s1 << " and string " << s2 << "are equal." << endl;
	}

	cout << "In terms of length :" << endl;

	string::size_type s1_len;
	string::size_type s2_len;

	s1_len = s1.size();
	s2_len = s2.size();

	if(s1_len > s2_len){
		cout << "The string " << s1 << " is greater than " << s2 << endl;
	}
	else if(s2_len > s1_len){
		cout << "The string " << s2 << " is greater than " << s1 << endl;
	}
	else{
		cout << "The string " << s1 << " and string " << s2 << " are equal." << endl;
	}


	return 0;
}