#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
ll a[n],h[n];
forn(i,n)cin>>a[i];
forn(i,n)cin>>h[i];
ll i=0;
ll ans=0;
while(i<n){
    ll previdx=i;
    ll cnt=1;
    ll fruits=a[i];
    if(fruits<=k){
        ans=max(ans,(ll)1);
    }
    while(i+1<n && h[i]%h[i+1]==0){
        fruits+=a[i+1];
        i++;
        cnt++;
        if(fruits<=k){
            ans=max(ans,cnt);
        }
        while(previdx<=i && fruits>k){
               fruits-=a[previdx];
               previdx++;
        }
    }
    i++;
}
cout<<ans<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
// 5 13
// 9 7 9 4 7
// 3 7 3 1 9