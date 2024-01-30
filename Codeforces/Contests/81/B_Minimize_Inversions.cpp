#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    vector<pair<ll,ll>>a;
    vector<pair<ll,ll>>b;
    ll f[n], s[n];
    forn(i,n){
        cin >> f[i];
    }
    forn(i,n){
        cin >> s[i];
    }
    forn(i,n){
        a.push_back({f[i], s[i]});
        b.push_back({s[i],f[i]});
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(auto i:b){
        cout << i.second << " ";
    }
    cout << "\n";
    for(auto i:b){
        cout << i.first << " ";
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