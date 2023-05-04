#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
ll a[n][n];
forn(i,n){
    forn(j,n){
        cin>>a[i][j];
    }
}
ll ans=0;
if(n%2==0){
for(ll i=0;i<n/2;i++){
    for(ll j=0;j<n;j++){
            if(a[i][j]!=a[n-1-i][n-1-j])ans++;
    }
}}
else{
    for(ll i=0;i<=n/2;i++){
        for(ll j=0;j<n;j++){
            if(i==n/2 && j==n/2)break;
            if(a[i][j]!=a[n-1-i][n-1-j])ans++;
        }
    }
}
if(k==0 && ans==0){
    cout<<"YES"<<"\n";
    return;
}
if(ans==k){
    cout<<"YES"<<"\n";
    return;
}
if(ans<k){
    if(n%2==0){
    if((k-ans)%2==0){
        cout<<"YES"<<"\n";
        return;
    }}
    else{
        cout<<"YES"<<"\n";
        return;
    }
}
cout<<"NO"<<"\n";
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}