#include<iostream>
using namespace std;
main()
{
	/*
	wap to print even numbers from 1 to 100 using continue statement
	for(int i=1;i<=100;i++)
	{
		if(i%2!=0)
		{
			continue;
		}
		cout<<i<<endl;
	}
	*/
	int i,n;
	cout<<" Enter the number : ";
	cin>>n;
	
	for(i=2;i<n;i++){
		if(i%2==0)
			cout<<" It is  not prime number";
		break;
	}
	if(i==n)
		cout<<" The number is prime number ";
}

