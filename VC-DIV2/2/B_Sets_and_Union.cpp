#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
bool bs(vector<ll>&v,ll i){
    ll n=v.size();
    ll l=0;
    ll r=n-1;
    while(l<=r){
        ll mid=(l+r)/2;
        if(v[mid]==i){
            return true;
        }
        else if(v[mid]>i){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return false;
}
void solve(){
ll n;
cin>>n;
vector<ll>s[n];
set<ll>ck;
forn(i,n){
    ll k;
    cin>>k;
    forn(j,k){
        ll x;
        cin>>x;
        ck.insert(x);
        s[i].push_back(x);
    }
}
ll fans=0;
for(ll i=1;i<=50;i++){
    if(ck.find(i)!=ck.end()){
     set<ll>st;
    forn(j,n){
    if(!bs(s[j],i)){
        for(auto val:s[j]){
            st.insert(val);
        }
    }
    }
    fans=max(fans,(ll)st.size());
    }
}
cout<<fans<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}