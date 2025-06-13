#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void insertionsort(vector<int> &a){ // 0(n2)
	for(int i=0;i<a.size();i++)
	{
		int j=i;
		while(j>0 && a[j]<a[j-1])
		{
			swap(a[j],a[j-1]);
			j--;
		}
	}
}
int main(){
	vector<int> a{4,3,67,34,290,1,45};
	insertionsort(a);
	for(auto it : a) cout << it << " ";
}