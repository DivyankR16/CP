#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n], b[n];
    forn(i, n) cin >> a[i];
    forn(i, n) cin >> b[i];
    ll m;
    cin >> m;
    ll d[m];
    forn(i, m) cin >> d[i];
    multiset<ll> s;
    forn(i,m){
        s.insert(d[i]);
    }
    vector<ll> need;
    bool c = false;
    for (ll i = 0; i < n;i++){
        if(a[i]!=b[i]){
            need.push_back(b[i]);
        }
        // if(s.find(b[i])!=s.end()){
        //     c = true;
        // }
    }
    if(need.size()==0){
        if(m){
            bool ck = false;
            for (ll i = 0; i < n; i++)
            {
                if (d[m - 1] == b[i])
                {
                    ck = true;
                }
            }
            if (!ck)
            {
                cout << "NO" << "\n";
                return;
            }
            cout << "YES" << "\n";
        }
        else{
            cout << "YES" << "\n";
        }
        return;
    }
    bool ck = false;
    for (ll i = 0; i < need.size();i++){
        if(need[i]==d[m-1]){
            ck = true;
        }
    }
    for (ll i = 0; i < n;i++){
        if(d[m-1]==b[i]){
            ck = true;
        }
    }
        if (!ck)
        {
            cout << "NO" << "\n";
            return;
        }
        for (ll i = 0; i < need.size(); i++)
        {
            if (s.find(need[i]) != s.end())
            {
                s.erase(s.find(need[i]));
            }
            else{
            cout << "NO" << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
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