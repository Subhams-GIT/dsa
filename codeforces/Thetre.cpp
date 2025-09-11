#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	long double n,m,a;
	cin>>n;
	cin>>m;
	cin>>a;
	cout.precision(22);
	if(a>=max(n,m))
	{
		cout<<ceil(float(min(n,m))/float(a));
		// cout<<"smc";
	}
	else{
	cout << ceil(m/a)*ceil(n/a) << endl;
	}
	return 0;
}