#include<iostream>
#include<string.h>
#include<bitset>
using namespace std;

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int len=s1.length();
	bitset<100> b1(s1);
	bitset<100> b2(s2);

	cout<< (b1^b2).to_string().substr(100-len);
	
}
