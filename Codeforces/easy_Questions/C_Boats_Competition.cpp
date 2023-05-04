#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll w[n];
forn(i,n){
    cin>>w[i];
}
ll ans=INT_MIN;
sort(w,w+n);
for (ll i = 2; i < 2*n+1; i++)
{ll l=0;
ll r=n-1;
ll count=0;
while(l<r){
    if(w[l]+w[r]==i){
        count++;
        l++;
        r--;
    }
    else if(w[l]+w[r]<i){
        l++;
    }
    else{
        r--;
    }
}
ans=max(ans,count);
}
cout<<ans<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}