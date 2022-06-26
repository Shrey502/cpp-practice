#include<iostream>
using namespace std;
class base
{
	public:
	int a[5],i,sum,multi;
	void simp()
	{
		for(i=0;i<5;i++)
		{
			cin>>a[i];
		}
	}
	void addition()
	{
		sum=0;
		for(i=0;i<5;i++)
		{
			sum=sum+a[i];
		}
		cout<<"Addition of given numbers is "<<sum;
	}
	void multipl()
	{
		multi=1;	
		for(i=0;i<5;i++)
		{
			multi=multi*a[i];
		}
		cout<<"\nMultiplication of given numbers is "<<multi;
	}
};
int main()
{
	base obj;
	obj.simp();
	obj.addition();
	obj.multipl();
}
