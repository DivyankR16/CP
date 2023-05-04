/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Find the Index of the First Occurrence in a String
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        int nh=haystack.length();
        int nn=needle.length();
        if(nn>nh)return -1;
        for(int i=0;i<=nh-nn;i++){
            int j=0;
            int start_idx=i;
            while(i<nh && j<nn && haystack[i]==needle[j]){
                i++;
                j++;
            }
            if(j==nn){
               return start_idx;
            }
            if(start_idx!=i)i=start_idx;
        }
        return -1;
    }
};
// @lc code=end

