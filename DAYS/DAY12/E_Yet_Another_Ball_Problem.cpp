#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
if(n>k*(k-1)){
    cout<<"NO"<<"\n";
    return;
}
cout<<"YES"<<"\n";
ll cnt=0;
     for(ll i=1;i<=k;i++){
        for(ll j=i+1;j<=k;j++){
            cout<<i<<" "<<j<<"\n";
            cnt++;
            if(cnt==n)break;
            cout<<j<<" "<<i<<"\n";
            cnt++;
            if(cnt==n)break;
        }
        if(cnt==n)break;
     }
}
int main(){
solve();
return 0;
}