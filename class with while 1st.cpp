#include<iostream>
using namespace std;
class prog
{
	public:int i=1,j=2;
	void show()
	{
	      while(i<=123456){
	      	cout<<"\n"<<i;
	      	i=i*10+j;
	      	j=j+1;
		  }
	}
	void reverse()
	{   i=123456;
	cout<<"\n";
		while(i>=1){
			cout<<"\n"<<i;
			i=i/10;
		}	
	}
};
int main(){
	prog obj;
	obj.show();
	obj.reverse();
}
