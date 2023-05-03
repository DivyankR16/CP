/*
 * @lc app=leetcode id=29 lang=cpp
 *
 * [29] Divide Two Integers
 */

// @lc code=start
class Solution {
public:
    int divide(int dividend, int divisor) {
        if((dividend>0 && divisor>0) || (dividend<0 && divisor<0)){
        if(dividend<0)dividend=-dividend;
        if(divisor<0)divisor=-divisor;
        int ans=0;
        while(dividend>=0){
           dividend-=divisor;
           if(dividend>=0){
           ans++;}
        }
    return ans;
    }
    else if((dividend==0)){
        return 0;
    }
    else{
        if(dividend<0)dividend=-dividend;
        if(divisor<0)divisor=-divisor;
         int ans=0;
        while(dividend>=0){
           dividend-=divisor;
           if(dividend>=0){
           ans++;}
        }
    return -ans;
    }
    }
};
// @lc code=end

