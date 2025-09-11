#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int alphabet[26]={0};
	int n;
	cin>>n;
	string s;
	cin>>s;


	if(n<26){
		cout<<"NO";
		return 0;
	}

	for (int  i = 0; i < n; i++)
	{
		s[i]=tolower(s[i]);
		int ascii=s[i];
		alphabet[ascii-97]++;
	}
	
	for (int  i = 0; i < 26; i++)
	{
		if(alphabet[i]==0){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";

}