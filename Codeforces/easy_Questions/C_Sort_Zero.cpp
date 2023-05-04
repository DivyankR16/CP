#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll v[n];
forn(i,n){
    cin>>v[i];
}
ll x=0;
for (ll i = n-1; i >=0; i--)
{
    if(i!=0 && v[i]<v[i-1]){
         x=i;
         break;
    }
}
map<ll,ll>m1;
for (int i = 0; i < n; i++)
{m1[v[i]]++;}
map<ll,ll>m2;
for (int i = 0; i < x; i++)
{  m2[v[i]]++;
}
ll ele=INT_MIN;
ll ans=x;
ll t=-1;
bool flag=false;
forn(i,x){
    if(m1[v[i]]!=m2[v[i]]){
      ele=max(ele,v[i]);
    }}
for (ll i = x; i < n; i++)
{if(ele==v[i]){
    t=i+1;
    flag=true;
}
}
set<ll>s;
if(flag){
forn(i,t){
    s.insert(v[i]);}}
else{
    forn(i,ans){
    s.insert(v[i]);}
}
cout<<s.size()<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}