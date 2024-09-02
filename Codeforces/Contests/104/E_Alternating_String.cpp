#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if(n%2==0){
        vector<ll> ecnt(26, 0);
        vector<ll> ocnt(26, 0);
        forn(i,n){
            if(i%2==0){
                ecnt[s[i] - 'a']++;
            }
            else{
                ocnt[s[i] - 'a']++;
            }
        }
        ll mxodd = *max_element(ocnt.begin(),ocnt.end());
        ll mxeven = *max_element(ecnt.begin(),ecnt.end());
        cout << n - mxeven - mxodd << "\n";
    }
    else{
        vector<vector<ll>> ebcnt(n, vector<ll>(26, 0));
        vector<vector<ll>> eacnt(n, vector<ll>(26, 0));
        vector<vector<ll>> obcnt(n, vector<ll>(26, 0));
        vector<vector<ll>> obcnt(n, vector<ll>(26, 0));
        for (ll i = 1; i < n;i++){
            
        }
    }
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