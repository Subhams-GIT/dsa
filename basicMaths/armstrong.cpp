#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=407  ,dup=n;
	int rev=0;
	while (n>0)
	{
		int digit=n%10;
		rev=rev+pow(digit,3); // 0(log10(n))
		n/=10;
	}
	if(rev==dup)
	{
		cout<<true;
	}
	cout<<false;
		
}