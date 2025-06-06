#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n = 40;
	vector<int> ls;
	for (int i = 1; i <= sqrt(n); i++) //0(sqrt(n)) 
	{

		if (n % i == 0)
		{
			ls.push_back(i);
			// cout<<i<<" ";
			if (n / i != i)
			{
				ls.push_back(n / i);
				// cout<<n/i<<" ";
			}
		}
	}
	sort(ls.begin(),ls.end()); // 0(nlog(n)) n-> factors 
	for(auto it:ls) cout<< it <<" "; 
	
}