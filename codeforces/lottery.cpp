#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findlowerbound(int n){
	vector<int> bills={1,5,10,20,100};
	int lb=0;
	for (int i = 0; i < bills.size(); i++)
	{
		if(bills[i]<=n){
			lb=bills[i];
		}
	}
	return lb;
}
int findtotalways(int n){
	int ans=0;
	while(n!=0){
		int lb=findlowerbound(n);
		n-=lb;
		ans++;
	}
	return ans;
}

int main(){
	int n,ans=0;
	cin>>n;
	if(n==1 || n==5 || n==10 || n==20 || n==100){
		cout<<1;
		return 0;
	}
	
	cout<<findtotalways(n);

}

