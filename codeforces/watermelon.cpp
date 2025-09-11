#include<iostream>
using namespace std;

int main(){
	int w;
	// cout<<"enter weight"<<endl;
	cin>>w;
	if(w<4) cout<<"NO";
	else if(w%2!=0) cout<<"NO";
	else cout<<"YES";
}