#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll k=INT_MAX;
forn(i,n){
    ll d,s;
    cin>>d>>s;
    if(s%2==0){
        k=min(k,d+s/2-1);
    }
    else{
        k=min(k,d+s/2);
    }
}
cout<<k<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}