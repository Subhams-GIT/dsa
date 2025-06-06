#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n,cnt=0;
	cin>>n;
	for (int i = 1; i <= sqrt(n); i++) //0(sqrt(n)) 
	{

		if(cnt>2)

		{
			cout<<false;
			return 0;
		}
		if (n % i == 0)
		{
			cnt++;
			if (n / i != i)
			{
				cnt++;
			}
		}
	}
	cout<<true;
		
}