#include<iostream>
using namespace std;
class base
{
	public:
	int a[5],i,t,j;
	void simp()
	{
		for(i=0;i<10;i++)
		{
			cin>>a[i];
		}
		for(i=4;i>=0;i--){
			cout<<"\n"<<a[i];
		}
		}
};
int main()
{
	base obj;
	obj.simp();
}
