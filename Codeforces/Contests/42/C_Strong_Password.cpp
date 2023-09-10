#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
bool hasCommonSubsequence(const string& passwordDatabase, const string& rangeString) {
    int m = passwordDatabase.length();
    int n = rangeString.length();

    // Initialize a 2D boolean array for dynamic programming
    vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));

    // Base case: an empty rangeString is always a subsequence
    for (int i = 0; i <= m; i++)
        dp[i][0] = true;

    // Fill the dynamic programming array
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            // If the characters match, the subsequence exists
            if (passwordDatabase[i - 1] == rangeString[j - 1])
                dp[i][j] = dp[i - 1][j - 1] || dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    // If the last character of rangeString is a subsequence of passwordDatabase, return false
    return !dp[m][n];
}
void solve(){
string s;
cin>>s;
ll m;
cin>>m;
string l;
cin>>l;
string r;
cin>>r;

}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}