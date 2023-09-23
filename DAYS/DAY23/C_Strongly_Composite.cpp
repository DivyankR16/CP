#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
map<ll,ll>mp;
forn(j,n){
    ll x;
    cin>>x;
    for(ll i=2;i*i<=x;i++){
            while(x%i==0){
                mp[i]++;
                x/=i;
            }
    }
    if(x!=1){
        mp[x]++;
    }
}
ll rem=0;
ll ans=0;
for(auto i:mp){
   ans+=i.second/2;
   rem+=i.second%2;
}
ans+=rem/3;
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