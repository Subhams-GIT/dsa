#include<iostream>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;

	while(k!=0){
		int rem=n%10;
		if(rem==0){
			n/=10;
		}
		else{
			n--;
		}
		k--;
	}
	cout<<n;
	return 0;
}