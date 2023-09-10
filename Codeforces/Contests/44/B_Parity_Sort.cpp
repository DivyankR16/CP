#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
vector<ll>e;
vector<ll>o;
forn(i,n){
    if(a[i]%2==0){
        e.push_back(a[i]);
    }
    else{
        o.push_back(a[i]);
    }
}
sort(e.begin(),e.end());
sort(o.begin(),o.end());
bool ans=true;
ll ei=-1;
ll oi=-1;
forn(i,n){
    if(a[i]%2==0){
        ei++;
        if(oi>=0){
            if(o[oi]>e[ei]){
                ans=false; break;
            }
        }
    }
    else{
        oi++;
        if(ei>=0){
            if(e[ei]>o[oi]){
                ans=false;
                break;
            }
        }
    }
}
if(ans){
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