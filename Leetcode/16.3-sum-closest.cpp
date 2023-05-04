/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 */

// @lc code=start
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            int l=i+1;
            int r=n-1;
            while(l<r){
                if(nums[i]+nums[l]+nums[r]==target){
                   ans=target;
                   break;
                }
                else if(nums[i]+nums[l]+nums[r]<target){
                    if(ans==INT_MAX){
                      ans=nums[i]+nums[l]+nums[r];
                    }
                  else if(abs(target-(nums[i]+nums[l]+nums[r]))<abs(target-ans)){
                    ans=nums[i]+nums[l]+nums[r];
                  }
                  l++;
                }
                else{
                    if(ans==INT_MAX){
                      ans=nums[i]+nums[l]+nums[r];
                    }
                  else if(abs(target-(nums[i]+nums[l]+nums[r]))<abs(target-ans)){
                    ans=nums[i]+nums[l]+nums[r];
                  }
                  r--;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

