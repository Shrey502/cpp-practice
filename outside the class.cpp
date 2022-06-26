#include<iostream>
using namespace std;
class prog
{
	int a,b,c;
	public:
	void input();
	void add();
	void multi();
};
void prog::input()
{
	
	cout<<"Enter two numbers";
	cin>>a>>b;
}
void prog::add()
{
	c=a+b;
	cout<<"\naddition of those numbers is "<<c;
	
	}
	void prog::multi()
{
	c=a*b;
	cout<<"\nmultiplication of those numbers is "<<c;
	
	}
int main()
{
	prog c;
	c.input();
	c.add();
	c.multi();
}
