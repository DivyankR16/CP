#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,x;
cin >> n >> x;
ll a[n];
forn(i, n) cin >> a[i];
ll l = 1;
ll r = n+1;
set<ll>need;
while(r-l>1){
    ll m = l + (r - l) / 2;
    need.insert(m);
    if(a[m-1]<=x){
        l = m;
    }
    else{
        r = m;
    }
}
ll fidx = -1;
forn(i,n){
    if(a[i]==x){
        fidx = i+1;
        break;
    }
}
if(fidx==l){
    cout << 0 << "\n";
}
else{
    if(need.find(fidx)!=need.end()){
        cout << 2 << "\n";
        cout << fidx << " " << l << "\n";
        for (ll i = 1; i <=n;i++){
            if(i!=l && need.find(i)!=need.end()){
                if(a[i-1]<=x){
                cout << fidx << " " << i << "\n";
                return;
                }
            }
        }
    }
    else{
        cout << 1 << "\n";
        cout << fidx << " " << l << "\n";
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