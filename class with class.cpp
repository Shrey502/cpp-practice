#include<iostream>
using namespace std;
class prog1
{
	public:
	void add()
	{
		int a,b,c;
		cout<<"Enter two numbers";
		cin>>a>>b;
		c=a+b;
		cout<<"Addition of those two numbers is "<<c;
	}
};
class prog2
{
	public:
		void multi()
		{
			cout<<"\n\n\nEnter two numbers";
			cin>>a>>b;
			c=a*b;
			cout<<"Multiplication of those two numbers is "<<c;
		}
};
int main()
{
prog1 p;
p.add();
prog2 q;
q.multi();
}
