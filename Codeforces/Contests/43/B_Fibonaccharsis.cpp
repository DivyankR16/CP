#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
ll ans=0;
for(ll i=1;i<=n;i++){
    ll sc=n;
    ll fs=i;
    ll ck=true;
    ll nt;
    forn(j,k-2){
        nt=sc-fs;
        sc=fs;
        fs=nt;
        if(nt<0 || fs>sc){
            ck=false;
            break;
        }
    }
    if(ck)ans++;
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