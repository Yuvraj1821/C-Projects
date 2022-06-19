// file handling 1 : storing and getting data from file

#include<iostream>
#include<fstream>
using namespace std;

main()
{
	string str=" C++ language";
	ofstream input("file.txt");		// creating file using constructor           
	input<<str;					// storing data in file 
}
