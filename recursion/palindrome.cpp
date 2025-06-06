#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkifPalindrome(int si ,string s)
{
	if(si>=s.size()/2) return true;
	if(s[si]!=s[s.size()-si-1]) return false;
	return checkifPalindrome(si+1,s);
}

int main(){
	string s="madam";
	// cout<<s
	cout<<checkifPalindrome(0,s);
}