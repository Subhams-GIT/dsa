#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int>> output;
    int sum=0;
    bool checkSubsequenceSum(vector<int>& nums, int k) {
        vector<int> curr;
        return getans(0,curr,nums,k);
    }
    bool getans(int first,vector<int> &curr,vector<int> &nums,int k){
		sum=0;
        for(int j=0;j<curr.size();j++)
        {
            sum+=curr[j];
        }
        if(sum==k) return true;
        output.push_back(curr);

        for(int i=first;i<nums.size();i++)
        {
            curr.push_back(nums[i]);
            if(getans(i+1,curr,nums,k)) return true;
            curr.pop_back();
        }
        return false;
    }
};

int main(){
	Solution sol;
	vector<int> a({4, 3, 9});
	cout<<sol.checkSubsequenceSum(a,13);
}