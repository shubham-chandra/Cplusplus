#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void printVector(vector<string> & svec){
	for (vector<string>::iterator it = svec.begin();it !=svec.end();it++)
	{
		cout << *it <<endl;
	}
}

int main(){

vector<string> lines;

ifstream infile;
infile.open("test.cpp");

string temp;
while(!infile.eof()){
	infile >> temp;
	lines.push_back(temp);
}
infile.clear();
infile.close();

printVector(lines);
return 0;

}