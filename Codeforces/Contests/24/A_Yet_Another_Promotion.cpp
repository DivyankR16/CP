#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll a,b;
cin>>a>>b;
ll m,n;
cin>>n>>m;
if(m>=n){
if(a<b){
    cout<<a*n<<"\n";
}
else{
    cout<<b*n<<"\n";
}
}
else{ll cost=0;
    if(m*a<(m+1)*b){
        ll val=n/(m+1);
        cost+=m*a*val;
        val=n%(m+1);
        if(val){
            if(b<a)cost+=val*b;
            else cost+=val*a;
        }
    }
    else{
        cost+=n*b;
    }
    cout<<cost<<"\n";
}
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}