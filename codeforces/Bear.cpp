#include<iostream>
using namespace std;
int main(){
	int l,b;
	cin>>l;
	cin>>b;
	if(l==b)
	{
		cout<<1;
		return 0;
	}
	int count=0;
	while(l<=b){
		l*=3;
		b*=2;
		count++;
	}
	cout<<count;
}