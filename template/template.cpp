// class template 
#include<iostream>
using namespace std;

template <class Type>
class Base
{
	private:
		Type a,b;
		Type c;
	public:
		void getdata(Type m,Type n)
		{
			a=m;
			b=n;
			c=a+b;
		}
		void display()
		{
			cout<<" A= "<<a;
			cout<<"\t B= "<<b;
			cout<<"\n Addition = "<<c;
		}
};

main()
{
	Base <int>obj1;
	obj1.getdata(10.5,20);
	cout<<"\n Obj1 : ";
	obj1.display();
	
	Base <float>obj2;
	obj2.getdata(10,20.5);
	cout<<"\n\n Obj2 : ";
	obj2.display();
	
	Base <char>obj3;
	obj3.getdata('a',71);
	cout<<"\n\n Obj3 : ";
	obj3.display();
}
