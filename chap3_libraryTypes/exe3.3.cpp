#include <iostream>
using std::string;
using std::cin;
using std::cout;
using std::endl;

/*
Find different ways to initalize a string 
*/

int main(){

string s1;
string s2("shubham");
string s3(s2);
string s4(5,'s');

cout << s1 << " " << s2 << " " << s3 << " " << s4 <<endl;
return 0;  



}