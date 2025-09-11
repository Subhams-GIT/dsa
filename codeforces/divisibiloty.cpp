#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int getgap(int a,int b){
	if (a > b)
	{
		if (a % b == 0)
		{
			return 0;
		}
		else
		{
			int rem = a / b;
			int gap = b * (rem + 1) - a;
			return gap;
		}
	}
	else{
		return b-a;
	}
}

int main()
{
	int n;
	cin>>n;
	vector<int> res;
	int a, b;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		// cout<<getgap(a,b);
		res.push_back(getgap(a,b));
	}
	
	for(int i = 0; i < n; i++){
		cout<<res[i]<<" ";
	}
}