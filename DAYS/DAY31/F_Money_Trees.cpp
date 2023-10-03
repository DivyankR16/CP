#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll findMaxLen(ll a[],ll st,ll end,ll k){
    ll ans=0;
    ll sum=0;
    ll indst=st;
    for(ll indend=st;indend<=end;indend++){
       sum+=a[indend];
       while(indst<=indend && sum>k){
        sum-=a[indst];
        indst++;
       }
       ans=max(ans,indend-indst+1);
    }
    return ans;
}
void solve(){
ll n,k;
cin>>n>>k;
ll a[n],h[n];
forn(i,n)cin>>a[i];
forn(i,n)cin>>h[i];
ll st=0;
ll end=0;
ll ans=0;
while(end<n){
while(end+1<n && h[end]%h[end+1]==0){
    end++;
}
ans=max(ans,findMaxLen(a,st,end,k));
end++;
st=end;
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