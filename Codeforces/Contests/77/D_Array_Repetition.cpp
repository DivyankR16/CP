#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, q;
    cin >> n >> q;
    ll a[n];
    forn(i,n){
        ll b, x;
        cin >> b >> x;
        if(b==1){
            a[i] = x;
        }
        else{
            a[i] = 0;
        }
    }
    forn(i,q){
        
    }
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}