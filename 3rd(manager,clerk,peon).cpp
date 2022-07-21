#include<iostream>
using namespace std;
int main()
{
	char post;
	int bs,ts,hra,da;
	cout<<"Enter post of employee";
	cin>>post;
	cout<<"Enter basic salary of employee";
	cin>>bs;
	if( post=='m'){
		hra=bs*60/100;
		da=bs*20/100;
	}
	else if( post=='c'){
		hra=bs*50/100;
		da=bs*10/100;
	}
	else if( post=='p'){
		hra=bs*40/100;
		da=bs*5/100;
	}
	else {
		hra=0;
		da=0;
	}
	ts=bs+hra+da;
		cout<<"Total salary of this employee is "<<ts<<"Rs";
}
