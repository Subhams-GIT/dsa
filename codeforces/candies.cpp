#include<iostream>
#include<math.h>
using namespace std;

int main(){
	long long  n;
	cin>>n;

	long long  arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	for (int  i = 0; i < n; i++)
	{
		cout << (arr[i] - 1) / 2 << endl;
	}
	
}