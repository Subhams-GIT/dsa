#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// select min and swap

int getmin(int i, vector<int> &a) {
	int min = i;
	for (int j = i ; j < a.size(); j++) { // n + n-1 + n-2 + n-3 +  ..... + 2 + 1 => n(n+1)/2 => n2
		if (a[j] < a[min]) min = j;
	}
	return min;
}

void myswap(int in,int j,vector<int> &a){
	int temp=a[in];
	a[in]=a[j];
	a[j]=temp;
}
int main(){
	
	vector<int> array{5,7,3,4,90,2,6};
	// for(auto it:array) cin>>array[it];

	for(int i=0;i<array.size()-1;i++) //0(n2)
	{
		int minindx=getmin(i,array);
		
		// cout<<minindx;
		myswap(i, minindx, array);
	}
	for (int  i = 0; i < array.size(); i++)
	{
		cout<<array[i]<<" ";
	}
	
	
}