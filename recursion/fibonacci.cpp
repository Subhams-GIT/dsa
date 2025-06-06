#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fun(int n){
	if(n<=1) return n;
	int last=fun(n-1); // 1st called
	int seclast=fun(n-2); // 2nd called after 1st one is compltetely resolved
	return last+seclast;
}

int main(){
	cout<<fun(4);
}