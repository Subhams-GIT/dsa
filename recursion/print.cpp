#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void fun(int i,int n){
// 	if(i>n) return ;
// 	cout<<"subham ";
// 	//cnt++;
// 	fun(i+1,n);
// 	cout<<"hello";
// }

void fun(int i,int n )
{
	if(i==n) return;
	i++;
	fun(i,n);
	cout<<i;
}

int main(){
	cout<<"enter any number"<<endl;
	int n;
	cin>>n;
	fun(1,n);

}