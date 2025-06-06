#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void mySwap(int &s, int &e){
	int temp = s;
	s = e;
	e = temp;
}

vector<int> reverse(int s, int e, vector<int>& num)
{
	if(s>=e) return num;
	mySwap(num[s], num[e]);
	return reverse(s+1, e-1, num);
}
int main(){
	vector<int> num{1,2,3,4};
	reverse(0, num.size() - 1, num);
	for(auto it:num) cout<<it;
}