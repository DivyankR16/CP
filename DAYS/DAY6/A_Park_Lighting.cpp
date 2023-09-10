#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
ll ans;
if(m%2==0){
    cout<<n*(m/2)<<"\n";
}
else{
    if(n%2==0){
        cout<<n*(m/2)+n/2<<"\n";
    }
    else{
         cout<<n*(m/2)+n/2+1<<"\n";
         
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