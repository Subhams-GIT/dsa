#include <iostream>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> scores(n);
	int threshold = 0, ans = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> scores[i];
		if (i == k - 1)
			threshold = scores[i];
	}
	bool all_equal1 = std::all_of(scores.begin(), scores.end(), [&](int element=0){
		return element == 0;
	});
	if(all_equal1) {
		cout<<0;
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		if (scores[i] >= threshold && scores[i]!=0)
			ans++;
		if(scores[i]<threshold) break;
	}
	cout << ans;
}