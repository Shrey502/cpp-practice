#include<iostream>
using namespace std;
class prog
{
	private:
		int i,j,c,f;
		char a[10];
			public:
				void input();
				void length();
				void rev();
				void palendrome();
};
void prog::input()
{
	cout<<"Enter string";
	cin>>a;
}
void prog::length()
{
	for(i=0;a[i]!='\0';i++){
		
	}
	cout<<"length of given character is "<<i<<"\n";
}
void prog::rev()
{
	for(i=i-1;i>=0;i--){
		cout<<a[i];
	}	
}
void prog::palendrome()
{
	for(i=0;a[i]!='\0';i++){
	}
	f=0;
	c=i/2;
	i=i-1;
	for(j=0;j<=c;j++,i--)
	{
		if(a[i]!=a[j]){
			f=1;
		}
	}
	if(f==0)
	{
		cout<<"\npalendrome";
	}
	else{
		cout<<"\nnot palendrome";
	}
}
int main()
{
	prog p;
	p.input();
	p.length();
	p.rev();
	p.palendrome();	
}
