#include<iostream>
#include<vector>
using namespace std;

int main(){
	int teams,ans=0;
	cin>>teams;
	int uniforms[teams][2];

	for (int  i = 0; i < teams; i++)
	{
		int h,g;
		cin>>h>>g;
		uniforms[i][0]=h;
		uniforms[i][1]=g;
	}
	
	for (int  i = 0; i < teams; i++)
	{
		int j=0;
		while(j<teams){
			
			if(i!=j && uniforms[i][0]==uniforms[j][1]) ans++;
			j++;
		}
	}
	cout<<ans;

}	