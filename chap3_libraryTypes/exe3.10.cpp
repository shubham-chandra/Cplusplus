#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cin;
using std::cout;
using std::endl;

/*
Strip punctuations from string
*/
int main(){

	string temp;
	cin >> temp;
	string final;

	for (string::size_type i = 0; i < temp.size(); ++i)
	{
		if( !ispunct(temp[i]))
		final.push_back(temp[i]);	
	}
	cout << final << endl;

	return 0;
}