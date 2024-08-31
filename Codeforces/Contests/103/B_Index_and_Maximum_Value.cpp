#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m;
    cin >> n >> m;

    vector<ll> a(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    ll max_a = *max_element(a.begin(), a.end());
    ll global_add = 0;

    for (ll i = 0; i < m; ++i)
    {
        char c;
        ll l, r;
        cin >> c >> l >> r;

        if (c == '+')
        {
            if (l <= max_a && max_a <= r)
            {
                global_add += 1;
                max_a += 1;
            }
        }
        else if (c == '-')
        {
            if (l <= max_a && max_a <= r)
            {
                global_add -= 1;
                max_a -= 1;
            }
        }

        cout << max_a << " ";
    }

    cout << "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}