#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for (ll i = n; i >=1; i--)
    {
        for (ll j = n; j >= 1; j--)
        {
            ll val = i * j;           
            vector<vector<ll>> need;
            bool ck = true;
            need.assign(n+1,vector<ll>());
            for (ll k = n; k >= 1; k--)
            {
                ll num = min(val / k, n);
                if (num < 1)
                {
                    ck = false;
                    break;
                }
                need[num].push_back(k);
            }
            if(!ck){break;}
            stack<ll>s;
            ll midans=-val;
            for(ll k=1;k<=n;k++){
                bool brk=false;
                s.push(k);
                for(auto x:need[k]){
                    if(s.empty()){
                       brk=true;
                       break;
                    }
                midans+=s.top()*x;
                s.pop();
                }
                if(brk)break;
            }
            ans=max(ans,midans);
        }
    }
    cout << ans << "\n";
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}