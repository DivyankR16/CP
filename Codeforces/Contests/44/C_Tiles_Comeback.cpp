#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
ll a[n];
forn(i,n)cin>>a[i];
bool alleq=true;
forn(i,n-1){
    if(a[i]!=a[i+1])alleq=false;
}
if(alleq){
    if(n>=k){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    return;
}
ll st=a[0];
ll en=a[n-1];
ll stcnt=0;
ll edcnt=0;
ll pos=0;
forn(i,n){
    if(a[i]==st && stcnt<k-1)stcnt++;
    else if(a[i]==st && stcnt==k-1){
        stcnt++;
        pos=i;
        break;
    }
}
if(pos==n-1)edcnt=k;
for(ll i=pos+1;i<n;i++){
    if(a[i]==en)edcnt++;
    if(edcnt==k)break;
}
if(stcnt==k && edcnt==k){
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