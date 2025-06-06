#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=121,dup=n;
	int rev=0;
	while (n>0)
	{
		int digit=n%10;
		rev=rev*10+digit;
		n/=10;
	}
	if(dup==rev){
		cout<<true; // true is 1 in cpp
	}
		
}