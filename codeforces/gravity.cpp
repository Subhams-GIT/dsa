#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> boxes(n);
	for (int i = 0; i < n; i++)
	{
		cin >> boxes[i];
	}
	sort(boxes.begin(),boxes.end());
	for (int  i = 0; i < boxes.size(); i++)
	{
		cout<<boxes[i]<<" ";
	}
	
}