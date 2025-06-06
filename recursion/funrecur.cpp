#include<iostream>
#include<bits/stdc++.h>
using namespace std;


/*
tc ->0(n)
sc->0(n)
*/
int  sum(int n)
{
if(n==1) return 1;
return n*sum(n-1);
}
int main(){
	int n=6;
	cout<<sum(n);
}