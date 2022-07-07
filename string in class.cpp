#include<iostream>
using namespace std;
class prog
{
	private:
		int i;
		char a[10];
			public:
				void input();
				void length();
				void rev();
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
int main()
{
	prog p;
	p.input();
	p.length();
	p.rev();
}

