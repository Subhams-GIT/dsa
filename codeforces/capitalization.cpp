#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	char res=toupper(s[0]);
	s[0]=res;
	cout<<s;
}