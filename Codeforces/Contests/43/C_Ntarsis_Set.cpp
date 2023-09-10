#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        priority_queue<int, vector<int>, greater<int>> pq; // Min heap

        int smallest = 1;
        int idx = 0;

        while (k > 0) {
            int next_smallest;
            if (idx < n) {
                next_smallest = a[idx];
            } else {
                next_smallest = smallest;
            }

            while (!pq.empty() && pq.top() <= next_smallest) {
                pq.pop();
            }

            int count = pq.size();
            int total = next_smallest - smallest + 1;

            if (count <= k) {
                k -= count;
                smallest = next_smallest + 1;
                ++idx;
            } else {
                smallest += k;
                break;
            }

            if (idx == n) {
                while (k > 0) {
                    smallest++;
                    k--;
                }
                break;
            }

            pq.push(a[idx] + total);
        }

        cout << smallest << endl;
    }

    return 0;
}
