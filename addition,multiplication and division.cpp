#include<iostream>
using namespace std;
class prog
{
	public:
		int a,b,c;
		void input();
		void add();
		void multi();
		void sub();
};
void prog::input()
{
			cout<<"Enter two numbers :";
			cin>>a>>b;
		}
void prog::add()

	{
			c=a+b;
			cout<<c<<"\n";
		}
void prog::multi()
{
	c=a*b;
	cout<<c<<"\n";
}
void prog::sub()
{
	c=a-b;
	cout<<c<<"\n";
}
int main()
{
	prog p,q,r;
	p.input();
	p.add();
	q.input();
	q.multi();
	r.input();
	r.sub();
}
