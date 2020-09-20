#include <iostream>
#include <ios>//streamsize
#include <limits> //numeric limits

using namespace std;
int main(){

	int ival;

	while(cin >> ival,!cin.eof()){
		if(cin.bad()){
			throw runtime_error("IO stream corrupted");
		}
		if(cin.fail()){
			cerr << "bad Data ,try again\n";
			cout << cin.rdstate();
			cin.clear(); //set stream to goodbit
			//cin.clear(iostream::eofbit); // Set stream to eof bit
			cout << cin.rdstate();
			cin.ignore(INT8_MAX); 
			
			
			continue;
		}
	}


	return 0;
}