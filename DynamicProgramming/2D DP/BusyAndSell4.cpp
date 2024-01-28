#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // vector<vector<vector<int>>> dp(1001, vector<vector<int>>(2, vector<int>(101, -1)));
    int dp[1001][2][101];
    int solve(int idx, bool isBuy, int k, vector<int> &a)
    {
        if (idx == a.size())
        {
            return 0;
        }
        if (dp[idx][isBuy][k] != -1)
        {
            return dp[idx][isBuy][k];
        }
        if (k == 0)
            return 0;
        int ans1;
        int ans2;
        if (!isBuy)
        {
            ans1 = solve(idx + 1, !isBuy, k, a) - a[idx];
        }
        else
        {
            ans1 = solve(idx + 1, !isBuy, k - 1, a) + a[idx];
        }
        ans2 = solve(idx + 1, isBuy, k, a);
        return dp[idx][isBuy][k] = max(ans1, ans2);
    }
    int maxProfit(int k, vector<int> &a)
    {
        int n = a.size();
        // dp[i][j][k]->gives upto first i indexes if i, if (j=0->can buy or j=1->can sell ), the stock then what will be my profit with taking atmost k times;
        memset(dp, -1, sizeof(dp));
        return solve(0, 0, k, a);
    }
};