#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string s;
	cin>>s;

	int count=0;
	for (int i = 1; i <= s.length(); i++)
	{
		// cout<<count+1<<endl;
		if(count+1>=7) {
			cout<<"YES";
			return 0;
		}
		if(s[i]==s[i-1]) count++;
		else count=0;
	}
	cout<<"NO";
}