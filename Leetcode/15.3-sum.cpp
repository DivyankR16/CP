/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int l=i+1;
            int r=n-1;
            int target=-nums[i];
            while(l<r){
                if(nums[l]+nums[r]==target){
                    vector<int>v;
                    v.push_back(nums[i]);
                    v.push_back(nums[l]);
                    v.push_back(nums[r]);
                 ans.push_back(v);
                 int left=l;
                 int right=r;
                 while(l<r && nums[l]==nums[left])l++;
                 while(l<r && nums[r]==nums[right])r--;
                }
                else if(nums[l]+nums[r]<target){
                    l++;
                }
                else{
                    r--;
                }
            }
            while(i+1<n && nums[i]==nums[i+1])i++;
        }
        return ans;
    }
};
// @lc code=end

