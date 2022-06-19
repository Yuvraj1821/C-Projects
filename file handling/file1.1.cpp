// file handling 2 :  closing file using close function 
#include<iostream>
#include<fstream>
using namespace std;
main()
{
	string name;
	cout<<" Enter your name : ";
	cin>>name;
	
	ofstream obj("file1.txt");
	obj<<"My name is "<<name;
	obj.close();				
	// closing file usnig close function
		
	string content;
	ifstream obj1("file1.txt");

	getline(obj1,content);
	cout<<content;
}
