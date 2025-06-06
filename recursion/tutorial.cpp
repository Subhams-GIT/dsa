#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void fun(){
	if(cnt==4)
	{
		cout<<cnt;
		return ;
	}
	cout<<cnt;
	cnt++;
	fun();
	
}
int main(){
	
	fun();
		
}