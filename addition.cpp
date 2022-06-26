#include<iostream>
using namespace std;
class prog
{
	public:int a,b,c;
	void input()
	{
	cout<<"\n\nEnter two numbers :";
	cin>>a>>b;
	}
	void add()
	{
		c=a+b;
		cout<<"\n\naddition of those two numbers is "<<c;
	}
	void substract()
	{
		c=a-b;
		cout<<"\n\nsubstraction of those two numbers is "<<c;
	}
	void multiply()
	{
		c=a*b;
		cout<<"\n\nmultiplication of those two numbers is "<<c;
	}
	void divide()
		{
		c=a/b;
		cout<<"\n\nDivision of those two numbers is "<<c;
	}
};
int main(){
prog obj;
obj.input();
obj.add();
obj.input();
obj.substract();
obj.input();
obj.multiply();
obj.input();
obj.divide();

}

