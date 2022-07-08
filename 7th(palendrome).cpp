#include<iostream>
using namespace std;
int main()
{
	int n,t,s;
	cout<<"Enter an integer";
	cin>>n;
	while(n>0){
		t=n%10;
		s=s*10+t;
		n=n/10;
	}
		cout<<"Reverse of these number is "<<s<<",";
	if(n=s){
		cout<<"this number is palendrome";
	}
	else{
		cout<<"this number is not palendrome";
	}
}
