#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	string s;
	cin >> s;
	int lower=0, upper=0;
	for (int  i = 0; i < s.length(); i++)
	{
		if((int)s[i]>=65 && (int)s[i]<=90) upper++;
		else lower++;
	}
	// cout<<lower<<" "<<upper<<endl;
	if(upper>lower){
		transform(s.begin(), s.end(), s.begin(), ::toupper);
		cout<<s;
	}
	else if(upper<=lower){
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		cout<<s;
	}
	return 0;
}