// file handling 1 :  getting data from file

#include<iostream>
#include<fstream>
using namespace std;

main()
{
	string data;
	ifstream output("file.txt");
	getline(output,data);		// getting data from file using getline function 	
//	output>>data;		// getting data from file 
	cout<<data;
}
