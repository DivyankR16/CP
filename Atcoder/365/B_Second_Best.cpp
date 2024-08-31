#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    forn(i,n)cin>>a[i];
    vector<pair<ll, ll>> v;
    forn(i,n){
        v.push_back({a[i], i});
    }
    sort(v.begin(), v.end());
    cout << v[n - 2].second+1<< "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}