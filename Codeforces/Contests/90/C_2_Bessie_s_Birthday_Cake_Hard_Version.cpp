#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll mod, n, y;
    cin >> mod >> n >> y;
    multiset<ll> s;
    multiset<ll> fsts;
    vector<ll> scds;
    forn(i,n){
        ll val;
        cin >> val;
        s.insert(val);
    }
    ll prev;
    ll fst;
    bool isfst = true;
    ll ans = n - 2;
    for (auto i : s)
    {
        if (isfst)
        {
            prev = i;
            fst = i;
            isfst = false;
        }
        else
        {
            ll vgp;
            if ((i%n) >= prev)
            {
                vgp = ((i%n) - prev) % mod;
           }
           else{
               vgp = ((i%n) - prev + mod) % mod;
           }
           if(vgp>=3){
            if(vgp%2==0){
                fsts.insert(--vgp);
            }
            else{
                scds.push_back(--vgp);
            }
            //    ll val = min((--vgp) / 2, y);
            //    y -= val;
            //    if(y>=0){
            //        y = vgp / 2;
            //    }
            //    else{
            //        (vgp) -= 2 * val;
            //        ans -= vgp;
            //    }
           }
           prev = i;
        }
    }
    for(auto i:fsts){
        ll val = min(i / 2, y);
        y -= val;
        if(y>=i/2){
            y += val-i / 2;
        }
        else{
            ans -= i - 2 * val;
        }
    }
    for(auto i:scds){
        ll val = min(i / 2, y);
        y -= val;
        ans -= i - 2 * val;
    }
    cout << ans << "\n";
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