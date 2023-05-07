/*
 * @lc app=leetcode id=38 lang=cpp
 *
 * [38] Count and Say
 */

// @lc code=start
class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        n-=1;
        string s="1";
        while(n--){
        string newstr="";
          int ln=s.length();
          int i=0;
          while(i<ln){
          int cnt=1;
          char b=s[i];
          while(i<ln-1 && s[i]==s[i+1]){
            cnt++;
            i++;
          }
          char a=cnt+'0';
           newstr+=a;
           newstr+=b;
           if(b==s[i])i++;
          }
         s=newstr;
        }
        return s;
    }
};
// @lc code=end

