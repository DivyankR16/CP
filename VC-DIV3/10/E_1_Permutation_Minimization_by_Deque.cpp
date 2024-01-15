#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    deque<ll> q;
    forn(i,n){
     if(q.empty()){
         q.push_front(a[i]);
     }
     else if(a[i]<q[0]){
         q.push_front(a[i]);
     }
     else{
         q.push_back(a[i]);
     }
    }
    forn(i,n){
        cout << q[i] << " ";
    }
    cout << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}