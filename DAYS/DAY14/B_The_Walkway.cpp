#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m,d;
cin>>n>>m>>d;
ll a[m];
forn(i,m)cin>>a[i];
ll totcokeat=1;
forn(i,m){
    if(!i){
        if(a[i]==1){
            continue;
        }
        else{
        totcokeat+=(a[i]-2)/d+1;}
    }
    else{
        totcokeat+=(a[i]-a[i-1]-1)/d+1;
    }
}
totcokeat+=(n-a[m-1])/d;
map<ll,ll>ans;
forn(i,m){
    if(!i){
        ll val;
        if(a[i]==1){
           val=totcokeat;
        }
        else{
        val=totcokeat-(a[i]-2)/d-(a[i+1]-a[i]-1)/d-1+(a[i+1]-2)/d;
        }
        ans[a[i]]=val;
    }
    else if(i==m-1){
        ll val;
        if(a[i]==n){
            val=totcokeat-(a[i]-a[i-1]-1)/d+(n-a[i-1])/d-1;
        }
        else{
          val=totcokeat-(a[i]-a[i-1]-1)/d-1-(n-a[i])/d+(n-a[i-1])/d;
        }
        ans[a[i]]=val;
    }
    else{
        ll val=totcokeat-(a[i]-a[i-1]-1)/d-(a[i+1]-a[i]-1)/d-1+(a[i+1]-a[i-1]-1)/d;
        ans[a[i]]=val;
    }
}
ll minck=INT_MAX;
for(auto i:ans){
    minck=min(minck,i.second);
}
ll cnt=0;
for(auto i:ans){
    if(i.second==minck)cnt++;
}
cout<<minck<<" "<<cnt<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}