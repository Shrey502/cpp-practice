#include<iostream>
using namespace std;
class prog 
{
	private:
	int x,y,z;
	public:
	int add();
};
int prog:: add()
{
	
					cout<<"Enter two numbers :";
					cin>>x>>y;
					z=x+y;
					cout<<"\n"<<z;
				
}
class prog2
{
	private :
	int a,b,c;
	public:
	int sub();
	};
	int prog2::sub()
	{
		cout<<"Enter two numbers ";
		cin>>a>>b;
		c=a-b;
		cout<<"\n"<<c;
	}
	
int main()
{
	prog p;
	p.add();
	prog2 q;
	q.sub();
}
