#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<long long> count(n + 1, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            count[a[i]]++;
        }

        long long good_pairs = 0;

        for (int i = 1; i <= n; ++i)
        {
            if (count[i] > 1)
            {
                good_pairs -= (count[i] * (count[i] - 1) / 2);
            }
        }

        for (int i = 1; i <= n; ++i)
        {
            for (int j = i * 2; j <= n; j += i)
            {
                good_pairs -= (count[i] * count[j]);
            }
        }
        good_pairs += (static_cast<long long>(n) * (n - 1) / 2);

        cout << good_pairs << endl;
    }

    return 0;
}
