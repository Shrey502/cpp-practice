#include<iostream>
using namespace std;
int main(){
	int n,s=0,t;
	cout<<"enter an integer :";
	cin>>n;
	while(n!=0){
		t=n%10;
		s=s*10+t;
		n=n/10;
	}
	cout<<"Reverse of these number is "<<s;
	return 0;
}
