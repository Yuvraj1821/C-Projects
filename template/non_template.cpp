// non - template 
#include<iostream>
using namespace std;
class Base
{
	private:
		int a,b,c;
	public:
		void getdata(int m,int n)
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
	Base obj;
	obj.getdata(10 , 20.5);
	obj.display();	
}
