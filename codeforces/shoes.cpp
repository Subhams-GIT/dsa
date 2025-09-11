#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int ans=0;
	
	vector<int> shoes(4);

	for (int i = 0; i < 4; i++)
	{
		cin>>shoes[i];
	}

	sort(shoes.begin(),shoes.end());

	for (int i = 0; i < 4; i++)
	{
		if(shoes[i]==shoes[i+1]) ans++;
	}
	cout<<ans;
}