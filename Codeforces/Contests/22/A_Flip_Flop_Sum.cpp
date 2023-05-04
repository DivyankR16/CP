#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll ans=0;
forn(i,n){
    ans+=a[i];
}
ll flag1=false;
ll flag2=false;
ll flag3=false;
forn(i,n-1){
    if(a[i]==-1 && a[i+1]==-1){
        flag1=true;
        break;
    }}
if(!flag1){
    forn(i,n-1){
        if(a[i]*a[i+1]<0){
            flag2=true;
            break;
        }
    }
}
if(!flag2){
    forn(i,n-1){
        if(a[i]==1 && a[i+1]==1){flag3=true;
        break;}
    }
}
if(flag1){
    cout<<ans+4<<"\n";
}
else if(flag2){
    cout<<ans<<"\n";
}
else if(flag3){
    cout<<ans-4<<"\n";
}
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