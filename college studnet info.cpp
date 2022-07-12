#include<iostream>
using namespace std;
class prog
{
	public:
		int rno;
		char n[10];
		void input1();
};
void prog::input1()
{
	cout<<"Enter name of student :";
	cin>>n;
	cout<<"Enter roll no of given student :";
	cin>>rno;
}
class prog2
{
	public:
	int	m1,s1,e1,c1,tm,pr;
	void info1();
};
void prog2::info1()
{
	cout<<"\nEnter maths marks :";
	cin>>m1;
	cout<<"\nEnter maths stat marks :";
	cin>>s1;
	cout<<"\nEnter maths electronics marks :";
	cin>>e1;
	cout<<"\nEnter maths computer marks :";
	cin>>c1;
	tm=m1+s1+e1+c1;
	pr=tm*100/200;
	
}
class prog3:public prog2,public prog
{
	public :
		void main1();
};
void prog3::main1()
{
	cout<<"\n name of studnet is "<<n;
	cout<<"\nroll no of student is "<<rno;
	cout<<"\nyour total marks is "<<tm;
	cout<<"\n you got"<<pr<<"% in this examination";
}
int main()
{
	prog3 p;
	p.input1();
	p.info1();
	p.main1();
}
