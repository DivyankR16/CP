#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll b[n+2];
forn(i,n+2)cin>>b[i];
ll sum=0;
sort(b,b+n+2);
forn(i,n){
    sum+=b[i];
}
if(sum==b[n] || sum==b[n+1]){
    forn(i,n){
        cout<<b[i]<<" ";
    }
    cout<<"\n";
    return;
}
forn(i,n){
    if(sum+b[n]-b[i]==b[n+1]){
        forn(j,n){
            if(j!=i)cout<<b[j]<<" ";
        }
        cout<<b[n]<<"\n";
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