#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
ll a[n][m];
forn(i,n){
    forn(j,m){
        cin>>a[i][j];
    }
}
ll ans=0;
ll mn=(n%2==0)?n/2:n/2+1;
ll mm=(m%2==0)?m/2:m/2+1;
for(ll i=0;i<mn;i++){
    for(ll j=0;j<mm;j++){
        // ll need=INT_MAX;
        // need=min(need,abs(x2-x1)+abs(x3-x1)+abs(x4-x1));
        // need=min(need,abs(x1-x2)+abs(x3-x2)+abs(x4-x2));
        // need=min(need,abs(x1-x3)+abs(x2-x3)+abs(x4-x3));
        // need=min(need,abs(x1-x4)+abs(x2-x4)+abs(x3-x4));
        if(i==n-i-1 && j!=m-j-1){
            ll x1=a[i][j];
            ll x2=a[i][m-j-1];
            ll val=(x1+x2)/2;
            ans+=abs(val-x1)+abs(val-x2);
        }
        else if(i!=n-i-1 && j==m-j-1){
            ll x1=a[i][j];
            ll x2=a[n-i-1][j];
            ll val=(x1+x2)/2;
            ans+=abs(val-x1)+abs(val-x2);
        }
        else{
        ll x1=a[i][j];
        ll x2=a[n-1-i][j];
        ll x3=a[i][m-1-j];
        ll x4=a[n-1-i][m-1-j];
        ll arr[4];
        arr[0]=x1;
        arr[1]=x2;
        arr[2]=x3;
        arr[3]=x4;
        sort(arr,arr+4);
        ll val=(arr[1]+arr[2])/2;
        ans+=abs(val-x1)+abs(val-x2)+abs(val-x3)+abs(val-x4);
        }

        }
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