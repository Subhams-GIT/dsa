#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void bubblesort(vector<int > &a)
{
	int i=0,swapc=0;
	while(i<a.size() ) // 0(n2)
	{
		cout<<"process";
		for(int j=0;j<a.size()-i;j++)
		{
			if(a[j]>a[j+1]) {
				swapc++;
				swap(a[j],a[j+1]);
			}
		}
		if(swapc==0) return ;
		i++;
	}
	return ;
}
int main(){
	vector<int> a{1,2,4,5,78};
	bubblesort(a);
	for(auto it : a) cout << it << " ";
}