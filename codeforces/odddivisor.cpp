#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

string findOdd(long long N){
	int X = N;

    while(N%2==0) N/=2;

	for (int  i = 2; i < sqrt(N); i++)
	{
		if(N%i==0) return "No";
		/* code */
	}
	return "Yes";
}

int main(){
	long long n;
	cin>>n;

	vector<long long> b(n);
	for(int i=0;i<n;i++){
		cin>>b[i];
	}

	for (int  i = 0; i < b.size(); i++)
	{
		cout<<findOdd(b[i])<<endl;
	}
	
}