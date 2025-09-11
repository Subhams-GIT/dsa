#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	vector<char> rest;
	for(char c:s){
		if(c!='+') rest.push_back(c);
	}
	sort(rest.begin(),rest.end());
	for (int  i = 0; i <rest.size(); i++)
	{
		if(i==rest.size()-1){
			cout<<rest[i];
			break;
		}
		cout<<rest[i]<<'+';
	}
}