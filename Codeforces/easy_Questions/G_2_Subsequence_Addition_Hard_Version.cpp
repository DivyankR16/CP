#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll c[n];
forn(i,n)cin>>c[i];
sort(c,c+n);
if(c[0]!=1){
    cout<<"NO"<<"\n";
    return;
}
ll sum=0;
sum+=c[0];
for(ll i=1;i<n;i++){
    if(c[i]>sum){
        cout<<"NO"<<"\n";
        return;
    }
    sum+=c[i];
}
cout<<"YES"<<"\n";
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