#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,h;
	cin>>n>>h;
	vector<int> height(n);
	int ans=0;
	for ( int i:height){
		cin>>i;
		if(i>h) ans+=2;
		else ans+=1;
	}
	cout<<ans;
}