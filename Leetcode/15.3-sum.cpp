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
        set<vector<int>>p;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int l=i+1;
            int r=n-1;
            int target=-nums[i];
            while(l<r){
                if(nums[l]+nums[r]==target){
                 p.insert({nums[i],nums[l],nums[r]});
                 l++;
                 r--;
                }
                else if(nums[l]+nums[r]<target){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        for(auto i:p){
            ans.push_back(i);
        }
        return ans;
    }
};
// @lc code=end

