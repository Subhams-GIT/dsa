#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	string s ;
	cin>>s;
	int ans=0;
	for (int  i = 0; i < s.size(); )
	{
		/* code */
		if(s[i]==s[i+1]) {
			s.erase(i,1);
			ans++;
		} else{
			i++;
		}
		
	}
	cout<<ans;
		
}