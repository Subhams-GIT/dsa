#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;


bool checkUnique(int year){
	string s=to_string(year);
	sort(s.begin(),s.end());

	int i=0;
	while (i<s.length())
	{
		if(s[i]==s[i+1]) return false;
		i++;
	}
	return true;
	
}
int main(){
	int year;
	cin>>year;

	while (1)
	{
		if(checkUnique(++year)) break;
		// cout<<"sdn";
	}
	cout<<year;
	
	
}