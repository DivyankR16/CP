#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // for std::gcd

using namespace std;

// Function to solve each test case
void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    // Sort in descending order
    sort(a.rbegin(), a.rend());

    int currentGCD = 0;
    long long result = 0;

    // Add GCD step by step
    for (int i = 0; i < n; ++i)
    {
        currentGCD = __gcd(currentGCD, a[i]);
        result += currentGCD;
    }

    cout << result << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
