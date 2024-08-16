#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n,A;
    cin>>n>>A;
    ll a[n];
    forn(i,n)cin>>a[i];
    ll cur = a[0];
    vector<ll> ans(n, 0);
    forn(i,n){
        if(a[i]>cur){
            ans[i] = A + a[i];
            cur = ans[i];
        }
        else{
            ans[i] = A + cur;
            cur = ans[i];
        }
    }
    for(auto i:ans){
        cout << i << "\n";
    }
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}