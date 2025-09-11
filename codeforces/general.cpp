#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int maxi = 0, mini = 0;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i+1 < n; i++)
	{
		if(arr[maxi]<arr[i+1]){
			maxi=i+1;
		}
		if(arr[mini]>=arr[i+1]){
			mini=i+1;
		}
	}

	if(maxi<mini){
		cout<<maxi-0+arr.size()-mini-1;
	}
	else{
		cout<<maxi-0+arr.size()-2-mini;
	}
	return 0;
}
