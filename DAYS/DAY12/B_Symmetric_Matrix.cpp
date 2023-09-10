#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
ll cnt=0;
forn(i,n){
    ll mt[2][2];
    forn(j,2){
        forn(k,2){
            cin>>mt[j][k];
        }
    }
    if(mt[1][0]==mt[0][1])cnt++;
}
if(cnt>=2){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
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