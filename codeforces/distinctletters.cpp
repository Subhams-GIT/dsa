#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){
	char s[1000];
	gets(s);
	int n=strlen(s);
	map<char,int> alphabets;

	for (int  i = 0; i < n; i++)
	{
		if(s[i]>='a' && s[i]<='z') alphabets[s[i]]++;
	}
	cout<<alphabets.size();
	

}