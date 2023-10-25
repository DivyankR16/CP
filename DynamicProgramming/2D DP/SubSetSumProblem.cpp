#include <bits/stdc++.h>
using namespace std;
#define ll long long 
class Solution
{
public:
    vector<vector<ll>> memo;
    vector<ll > a;
    ll  sum;
    bool recur(ll index, ll sum)
    {
        if (index == -1)
        {
            return (sum == 0);
        }
        if (memo[index][sum] != -1)
            return memo[index][sum];
        bool ans = false;
        if (sum - a[index] >= 0)
        {
            ans |= recur(index - 1, sum - a[index]);
        }
        ans |= recur(index - 1, sum);
        return memo[index][sum] = ans;
    }
    bool isSubsetSum(vector<ll> arr, ll sum)
    {
        this->a = arr;
        this->sum = sum;
        this->memo.resize(a.size(), vector<ll>(sum + 1, -1));
        return recur(a.size() - 1, sum);
    }
    void printSubset(ll index,ll sum){
        if(index==-1){
            return;
        }
        if(recur(index-1,sum-a[index])){
            cout << a[index] << " ";
            printSubset(index - 1, sum - a[index]);
        }
        else if(recur(index-1,sum)){
            printSubset(index - 1, sum);
        }
        return;
    }
};
int  main()
{
    ll  t;
    cin >> t;
    while (t--)
    {
        ll  N, sum;
        cin >> N;
        vector<ll> arr(N);
        for (ll  i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        cin >> sum;

        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
        ob.printSubset(N-1, sum);
        cout << "\n";
    }
    return 0;
}