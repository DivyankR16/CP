#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll pref[n][30];
forn(i,n){
    if(!i){
        for(ll j=0;j<30;j++){
            if((1<<j) & a[i]){
                pref[i][j]=1;
            }
            else{
                pref[i][j]=0;
            }
        }
    }
    else{
        for(ll j=0;j<30;j++){
            if((1<<j) & a[i]){
                pref[i][j]=pref[i-1][j]+1;
            }
            else{
                pref[i][j]=pref[i-1][j];
            }
        }
    }
}
ll q;
cin>>q;
forn(i,q){
    ll l,k;
    cin>>l>>k;
    l--;
    ll ans=0;
    ll final=-2;
     ll left=l;
     ll right=n-1;
     while(left<=right){
     ll mid=left+(right-left)/2;
     ll ans=0;
     for(ll j=0;j<30;j++){
        if(!l){
            if(pref[mid][j]==mid+1){
                ans+=(1<<j);
            }
        }
        else{
            if(pref[mid][j]-pref[l-1][j]==mid-l+1){
                ans+=(1<<j);
            }
        }
     }
     if(ans>=k){
        final=max(final,mid);
        left=mid+1;
     }
     else{
        right=mid-1;
     }
     }
     cout<<final+1<<" ";
}
cout<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}