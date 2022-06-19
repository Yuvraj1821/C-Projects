// to print prime numbers from the range of two numbers using boolean and math functions 
#include<iostream>
using namespace std;

bool isprime(int num)
{
	for(int i=2;i<num;i++)
	{
		if(num%i==0){
			return false;
		}
	}
	return true;
}

main(){
	int a,b;
	cout<<" Enter the range : ";
	cin>>a>>b;
	cout<<"\n The prime numbers are : ";
	for(int i=a;i<=b;i++){
		if(isprime(i)){
			cout<<i<<"\t";
		}
	}
}

