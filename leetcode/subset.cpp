#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	vector<vector<int>> output;
	int n;

	void backtrack(int first, vector<int> curr, vector<int> &nums)
	{

		output.push_back(curr);
		// for (const auto &subset : output)
		// {
		// 	for (int num : subset)
		// 	{
		// 		cout << num << " ";
		// 	}
		// 	cout << endl;
		// }

		for (int i = first; i < n; ++i)
		{
			curr.push_back(nums[i]);

			backtrack(i + 1, curr, nums);
			cout<<curr[curr.size()-1]<<" ";
			curr.pop_back();
			for (int num : curr)
			{
				cout << num << endl ;
			}
		}
	}

	vector<vector<int>> subsets(vector<int> &nums)
	{
		n = nums.size();
		vector<int> curr;
		backtrack(0, curr, nums);
		return output;
	}
};

int main()
{
	Solution sol;
	vector<int> v({1, 2, 3});
	sol.subsets(v);
}