/*
 * @lc app=leetcode id=18 lang=cpp
 *
 * [18] 4Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int l=j+1;
                int r=n-1;
                while(l<r){
                    long long tg=(long long)target-((long long)nums[i]+(long long)nums[j]);
                    if(nums[l]+nums[r]==tg){
                        ans.push_back({nums[i],nums[j],nums[l],nums[r]});
                        int left=l;
                        int right=r;
                        while(l<r && nums[left]==nums[l])l++;
                        while(l<r && nums[right]==nums[r])r--;
                    }
                    else if(nums[l]+nums[r]<tg){
                        l++;
                    }
                    else{
                        r--;
                    }
                }
                while(j+1<n && nums[j]==nums[j+1])j++;
            }
            while(i+1<n && nums[i]==nums[i+1])i++;
        }
        return ans;
    }
};
// @lc code=end

