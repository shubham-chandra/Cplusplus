#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ofstream& open_file(ofstream& outfile,string& fileName){
	outfile.close();
	outfile.clear();

	outfile.open(fileName.c_str(),ofstream::app);

	return outfile;


}


int main(){

	ofstream ofile;
	string file_name("temp");
	ofstream& oRefFile = open_file(ofile,file_name);

	oRefFile << "Writing to the file";

	oRefFile.close();
	return 0;
}
