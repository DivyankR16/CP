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

}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}