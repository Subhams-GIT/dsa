#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
	map<string,int> collection={{"Tetrahedron",4},{"Cube",6},{"Octahedron",8},{"Dodecahedron",12},{"Icosahedron",20}};

	int n,ans=0;
	cin>>n;
	for (int  i = 0; i < n; i++)
	{
		string s;
		cin>>s;
		ans+=collection[s];
	}
	cout<<ans;
}