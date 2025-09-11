#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	vector<int> alpha(26);

	for(char c:s){
		++alpha[(int)c-97];
	}
	int count=0;
	for (int  i = 0; i < alpha.size(); i++)
	{
		if(alpha[i]!=0) count++;
	}
	count%2==0?cout<<"CHAT WITH HER!":cout<<"IGNORE HIM!";
}