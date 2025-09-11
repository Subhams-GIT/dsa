#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> friends(n);
	for (int  i = 0; i < n; i++)
	{
		cin>>friends[i];
	}

	
	for (int  i = 1; i <= n; i++)
	{
		auto it=find(friends.begin(),friends.end(),i);
		cout<<it-friends.begin()+1<<" ";
	}
	
}