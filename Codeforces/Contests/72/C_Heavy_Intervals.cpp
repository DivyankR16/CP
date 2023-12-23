#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll l[n], r[n], c[n];
    forn(i, n) cin >> l[i];
    forn(i, n) cin >> r[i];
    forn(i, n) cin >> c[i];
    set<pair<ll, bool>> s;
    forn(i,n){
        s.insert({l[i], 0});
    }
    forn(i,n){
        s.insert({r[i], 1});
    }
    ll ans = 0;
    sort(c, c + n);
    vector<ll> temp;
    vector<ll> ansVec;
    for(auto i:s){
       if(i.second==0){
           temp.push_back(i.first);
       }
       else{
           ansVec.push_back(i.first - temp[temp.size() - 1]);
           temp.pop_back();
       }
    }
    sort(ansVec.begin(), ansVec.end());
    ll ansVal = 0;
    forn(i,n){
        ansVal += (ansVec[i] * c[n - i - 1]);
    }
    cout << ansVal << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}