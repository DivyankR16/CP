#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    bool isSubsetSum(vector<ll> arr, ll sum)
    {
        ll n = arr.size();
        bool dp[n + 1][sum + 1];
        for (ll i = 0; i <= sum;i++){
            dp[0][i] = 0;
        }
        for (ll i = 0; i <= n;i++){
            dp[i][0] = 1;
        }
        for (ll i = 1; i <= n;i++){
            for (ll j = 1; j <= sum;j++){
                dp[i][j] = dp[i - 1][j];
                if(j-arr[i-1]>=0){
                    dp[i][j] |= dp[i - 1][j - arr[i - 1]];
                }
            }
        }
        return dp[n][sum];
    }
};
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll N, sum;
        cin >> N;
        vector<ll> arr(N);
        for (ll i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        cin >> sum;

        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0;
}