#include<iostream>
using namespace std;
class prog
{
	private:
	int f=1,i=1;
	public:
		void fact(int n)
		{
			for(i=1;i<=n;i++)
			{
			f=f*i;
		}
		cout<<f;
		}
};
int main()
{
	int n;
	cout<<"Enter limit :";
	cin>>n;
	prog p;
	p.fact(n);
}
