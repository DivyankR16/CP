#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> memo;
    vector<int> a;
    int sum;
    bool recur(int index, int sum)
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
    bool isSubsetSum(vector<int> arr, int sum)
    {
        this->a = arr;
        this->sum = sum;
        this->memo.resize(a.size(), vector<int>(sum + 1, -1));
        return recur(a.size() - 1, sum);
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        cin >> sum;

        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0;
}