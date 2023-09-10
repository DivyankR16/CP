#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
ll a[n],p[m];
forn(i,n)cin>>a[i];
forn(i,m)cin>>p[i];
bool grandAns=true;
ll need[n];
memset(need,0,sizeof(need));
forn(i,m){
    need[p[i]-1]++;
}
forn(i,n){
    ll val=a[i];
    ll j=n-1;
    while(j>i && a[j]>=val)j--;
    if(j!=i){
        for(ll k=i;k<=j-1;k++){
            if(!need[k]){
                grandAns=false;
                break;
            }
        }
    }
    if(!grandAns)break;
}
if(grandAns){
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