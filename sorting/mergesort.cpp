#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
/*
divide -> divide until the size is 1 
merge -> merge two sorted arrays
*/
void merge(vector<int> &a ,int l,int m,int h)
{
	vector<int> ans(a.size());
	int k=m+1,res=0,left=l;
	while(left<=m && k<=h )
	{
		if(a[left]<=a[k])
		{
			ans.push_back(a[left]);
			left++;
		}
		else if (a[left]>a[k])
		{
			ans.push_back(a[k]);
			k++;
		}
	}

	while(left<=m)
	{
		ans.push_back(a[left]);
		left++;
	}

	while(k<=h)
	{
		ans.push_back(a[k]);
		k++;
	}
}


void  divide(int s,int e , vector<int> &a){
	if(s>=e) return ;
	int left=s,right=e;
	int mid=(left+right)/2;
	divide(left,mid,a);
	divide(mid+1,right,a);
	merge(a,left,mid,right);
}


int main(){
	vector<int> a{13,2,45,6,7,34,90,234,2};
	divide(0,a.size()-1,a);
	for(auto it : a) cout << it << " ";
}