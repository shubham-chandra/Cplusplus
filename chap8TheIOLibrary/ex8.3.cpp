#include <iostream>
#include <string>
using namespace std;


istream& ReadStream(istream& myStream){
	string temp;

	while(myStream >> temp){
		cout << temp;
	}

	cout << "state of stream :" <<myStream.rdstate();
	myStream.clear();
	cout << "state of stream after :" << myStream.rdstate();
	return myStream;
}


int main(){

	ReadStream(cin);

	return 0;
}