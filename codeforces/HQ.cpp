#include<iostream>
#include<string.h>
using namespace std;


int main(){
	string s;
	cin>>s;
	// cout<<s.find('H')<<endl;
	// cout<<s.find('Q')<<endl;
	// cout<<s.find('9')<<endl;
	if(s.find('H')<s.length() || s.find('Q')<s.length() || s.find('9')<s.length()) {
		cout<<"YES";
	}
	else cout<<"NO";
}
