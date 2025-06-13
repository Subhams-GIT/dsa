#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int>> output;
    int sum=0;
    int ans=0;    	
    int countSubsequenceWithTargetSum(vector<int>& nums, int k){
    	vector<int> curr;
        getans(0,curr,nums,k);
		return ans;
    }
    void getans(int first,vector<int> &curr,vector<int> &nums,int k){
		sum=0;
        for(int j=0;j<curr.size();j++)
        {
            sum+=curr[j];
        }
        if(sum==k) ans++;
        output.push_back(curr);

        for(int i=first;i<nums.size();i++)
        {
            curr.push_back(nums[i]);
            getans(i + 1, curr, nums,k);
            curr.pop_back();
        }
        
    }   
};

int main(){
	Solution sol;
	vector<int> a({4, 3, 9 ,1,0});
	cout<<sol.countSubsequenceWithTargetSum(a,13);
}