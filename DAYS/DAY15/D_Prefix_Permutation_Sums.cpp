#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll ck[n-1];
ll a[n+1];
memset(a,0,sizeof(a));
forn(i,n-1){
    ll x;
    cin>>x;
    ck[i]=x;
}
if(ck[0]<=n){
    a[ck[0]]++;
}
forn(i,n-2){
    ll diff=ck[i+1]-ck[i];
    if(diff<=n){
        a[diff]++;
    }
}
ll missing=0;
for(ll i=1;i<=n;i++){
    if(!a[i])missing++;
}
if(missing>2){
    cout<<"NO"<<"\n";
}
else{
    ll sum=0;
    for(ll i=1;i<=n;i++){
        if(!a[i]){
         sum+=i;
         }
    }
if(missing==1){
    cout<<"YES"<<"\n";
    return;
}
bool ans=false;
forn(i,n-2){
   ll dd=ck[i+1]-ck[i];
   if(sum==dd){
    if(sum>n){
        ans=true;
        break;
    }
    else{
        if(a[dd]>1){
            ans=true;
            break;
        }
    }
   }
}
if(ck[0]==sum){
    if(sum>n){
        ans=true;
    }
    else{
       if(a[sum]>1){
        ans=true;
       } 
    }
}
if(ans){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
}
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