#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
for(ll i=0;i<=n;i++){
    ll liar=0;
    forn(j,n){
        if(a[j]>i)liar++;
    }
    if(liar==i){
        cout<<liar<<"\n";
        return;
    }
}
cout<<-1<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}