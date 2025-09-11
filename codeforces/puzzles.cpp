#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int ans=INT16_MAX;
	vector<int> quantities(m);
	for (size_t i = 0; i < m; i++)
	{
		cin>>quantities[i];
	}
	sort(quantities.begin(),quantities.end());
	for (int  i = 0; i+n-1 < m; i++)
	{
		ans=min(ans,quantities[i+n-1]-quantities[i]);
	}
	
	cout<<ans;
}