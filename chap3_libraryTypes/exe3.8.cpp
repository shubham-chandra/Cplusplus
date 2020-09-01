#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

/*
Program to take string and concatenate them
*/

int main(){
	string final;
	string final2;
	string temp;

	while(cin >> temp){
		final+=temp;
		final2+= " ";
		final2+= temp;

	}

	cout << final << endl;
	cout << final2 << endl;

	return 0;
}