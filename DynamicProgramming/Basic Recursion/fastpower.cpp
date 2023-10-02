#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll fastPow(ll a,ll n){
    if(n==0){
        return 1;
    }
    ll val=fastPow(a,n/2);
    val*=val;
    if(n%2==1){
        return val*a;
    }
    return val;
}
void solve(){
ll a,n;
cin>>a>>n;
cout<<"The power of "<<a<<" w.r.t "<<n<<" is "<<fastPow(a,n)<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}