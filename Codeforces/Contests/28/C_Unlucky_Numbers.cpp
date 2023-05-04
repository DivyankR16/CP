#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
void solve()
{
    string l, r;
    cin >> l >> r;
    if (l == r)
    {
        cout << l << "\n";
    }
    else if(l.length()==1){
        cout<<l<<"\n";
    }
    else if(l.length()+1<=r.length()){
        string ans="";
        forn(i,l.length()){
            ans+="9";
        }
        cout<<ans<<"\n";
    }
    else{
        forn(i,9){
            forn(i,9){
                forn(i,l.length()){
                    
                }
            }
        }
}
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    };
    return 0;
}