#include<iostream>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	bool first=false;
	for (int i = 0; i < n; i++)
	{
		for (int  j = 0; j<m; j++)
		{
			if(i%2==0){
				cout<<"#";
				continue;
			}
			if(first){
				if(j==m-1) {
					cout<<"#";
					continue;
				}
				
			}
			if(!first){
				if(j==0) {
					cout<<"#";
					continue;
				}
			}
				cout<<".";
		}
		if(i%2==0)first=!first;
		cout<<endl;
	}
	
}