#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll bs(ll n,ll arr[],ll st,ll en,ll tg){
    if(st>en){
        return -1;
    }
    ll mid=(arr[st]+arr[en])/2;
    if(arr[mid]==tg){
        return mid;
    }
    else if(arr[mid]>tg){
          en=mid-1;
    } 
    else{
        st=mid+1;
    }
}
void solve(){
ll n,m;
cin>>n>>m;
string s;
cin>>s;
forn(i,m){
    ll l,r;
    cin>>l>>r;
    forn(i,n){
       bs()
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