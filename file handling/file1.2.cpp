#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ofstream out;
	out.open("file2.txt");		// creating file using open function
	out<<" This is file handling in c++ ";
	out<<"\n Created by yuvraj ";
	out.close();

	string content;
	ifstream in;
	in.open("file2.txt");	// opening file using open function

//	while(in.eof()==0)
//	{		//reading content of file by getline using loop and eof function
//		getline(in,content);
//		cout<<content<<endl;
//	}

	while(getline(in, content))
	{
		cout<<content<<endl;
	}
	in.close();
}
