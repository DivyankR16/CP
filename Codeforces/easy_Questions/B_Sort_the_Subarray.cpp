#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll b[n];
forn(i,n)cin>>b[i];
if(a[0]!=b[0] && a[n-1]!=b[n-1]){
    cout<<1<<" "<<n<<"\n";
    return;
}
ll check=true;
forn(i,n-1){
    if(a[i]>a[i+1]){
        check=false;
        break;
    }
}
if(check){
    cout<<1<<" "<<n-1<<"\n";
    return;
}
ll startidx;
ll endidx;
forn(i,n){
if(a[i]!=b[i]){
    startidx=i;
    // cout<<startidx<<"\n";
    break;
}
}
forn(i,n){
    if(a[n-i-1]!=b[n-i-1]){
        endidx=n-i-1;
        break;
    }
}
// cout<<startidx<<" "<<endidx<<"\n";
while(startidx>=1 && b[startidx-1]<=b[startidx])startidx--;
while(endidx<=n-2 && b[endidx]<=b[endidx+1])endidx++;
cout<<startidx+1<<" "<<endidx+1<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}