// body mass index

#include<iostream>
using namespace std;
main()
{
	float weight,height,bmi;
	cout<<" Enter the weight(kg) and height(m) : ";
	cin>>weight>>height;
	
	bmi=weight/(height*height);
	
	if(bmi<18.5)
		cout<<" Underweight"<<endl;
	else if(bmi>25)
		cout<<" Overweight"<<endl;
	else
		cout<<" Normal weight "<<endl;
	
	cout<<" Your BMI is : "<<bmi;
}
