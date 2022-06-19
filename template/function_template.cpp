// function template
#include<iostream>
using namespace std;

class Base
{
	private:
		int a,b;
	public:
		template <typename T>
		T getdata(T m,T n)
		{
			cout<<" A= "<<m;
			cout<<"\t B= "<<n;
		}
};

main()
{
	Base obj1;
	obj1.getdata<int>(10.5,25.6);
}
