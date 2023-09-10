#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n],b[n];
ll pos[n];
ll ans[n];
memset(ans,0,sizeof(ans));
forn(i,n){cin>>a[i];
pos[a[i]]=i;}
forn(i,n){
    cin>>b[i];
    ll diff=pos[b[i]]-i;
    if(diff<0){
        diff+=n;
    }
    ans[diff]++;
}
ll GrandAns=1;
forn(i,n){
    GrandAns=max(GrandAns,ans[i]);
}
cout<<GrandAns<<"\n";
}
int main(){
solve();
return 0;
}