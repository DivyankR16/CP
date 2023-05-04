#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,c;
cin>>n>>c;
vector<ll>v(n);
forn(i,n){
    cin>>v[i];
}
map<ll,ll>m;
forn(i,n){
    m[v[i]]++;
}
ll ans=0;
forn(i,n){
    if(m[v[i]]>c){
        ans+=c;
        m[v[i]]=0;
    }
    else{
        ans+=m[v[i]];
        m[v[i]]=0;
    }
}
cout<<ans<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}