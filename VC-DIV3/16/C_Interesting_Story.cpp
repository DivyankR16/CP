#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
void solve()
{
    ll n;
    cin >> n;
    vector<string> a;
    forn(i,n){
        string s;
        cin >> s;
        a.push_back(s);
    }
    ll ans = 0;
    for (ll i = 0; i < 5;i++){
        sort(a.begin(), a.end(), [&](const string &f, const string &l)
             {
            ll freq1=0;
            ll other1=0;
            ll freq2 = 0;
            ll other2 = 0;
            for(auto j:f){
                if((j-'a')==i){
                    freq1++;
                }
                else{
                    other1++;
                }
            }
            for (auto j : l)
            {
                if ((j - 'a') == i)
                {
                    freq2++;
                }
                else{
                    other2++;
                }
            }
                return freq1-other1 > freq2-other2;
            });
        ll cnt = 0;
        ll req = 0;
        ll other = 0;
        for(auto k:a){
            for(auto j:k){
               if((j-'a')==i){
                   req++;
               }
               else{
                   other++;
               }
            }
            if(req>other){
                cnt++;
            }
            else{
                break;
            }
        }
        ans = max(ans, cnt);
    }
    cout << ans << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}