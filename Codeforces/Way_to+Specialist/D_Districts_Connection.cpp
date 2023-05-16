#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
pair<ll*,ll*>check=minmax_element(a,a+n);
if(*(check.first)==*(check.second)){
    cout<<"NO"<<"\n";
    return;
}
cout<<"YES"<<"\n";
forn(i,n){
    if(a[i]!=*(check.second)){
        cout<<i+1<<" "<<check.second-a+1<<"\n";
    }
    else if(i!=(check.second-a)){
        cout<<i+1<<" "<<check.first-a+1<<"\n";
    }
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