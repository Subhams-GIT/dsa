#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	vector<int> b(n);

	for (size_t i = 0; i < n; i++)
	{
		cin>>b[i];
	}
	
	int ans=1;

	for (int i = 0,j=i+1; i < n && j<n;)
	{
		if(b[j]>=b[j-1]) {
			ans=max(ans,j-i+1);
			// cout<<"increasing"<<ans<<endl;
		}else{
			i=j;
			ans=max(ans,j-i+1);
			// cout<<"decreasing"<<ans<<endl;
		}
		j++;
	}

	cout<<ans;
}