#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    bool isSubsetSum(vector<ll> arr, ll sum)
    {
        ll n = arr.size();
        bool dp[2][sum + 1];
        for (ll i = 0; i <= sum;i++){
            dp[0][i] = 0;
        }
        for (ll i = 0; i <2;i++){
            dp[i][0] = 1;
        }
        for (ll i = 1; i <= n;i++){
            for (ll j = 1; j <= sum;j++){
                dp[i%2][j] = dp[(i - 1)%2][j];
                if(j-arr[i-1]>=0){
                    dp[i%2][j] |= dp[(i - 1)%2][j - arr[i - 1]];
                }
            }
        }
        return dp[n%2][sum];
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