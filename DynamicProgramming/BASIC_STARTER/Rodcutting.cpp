#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll> memo;
ll maxprofit(ll a[],ll length,ll n){
    if(length==0){
        return 0;
    }
    if(memo[length]!=-1){
        return memo[length];
    }
    ll maxProfff = INT_MIN;
    
    forn(i,n){
        ll prof = 0;
        if((i+1)<=length){
            prof += a[i] + maxprofit(a, length - (i + 1), n);
        }
        else{
            break;
        }
        maxProfff = max(maxProfff, prof);
    }
    return memo[length]=maxProfff;
}
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    memo.clear();
    memo.resize(n + 1, -1);
    cout <<"Maximum profit will be:- "<< maxprofit(a, n, n) << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}