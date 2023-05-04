#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
ll n1=0;
ll n2=0;
forn(i,n){
    cin>>a[i];
    if(a[i]==2)n2++;
}
ll nn1=0;
ll nn2=0;
ll k=INT_MIN;
forn(i,n-1){
    if(a[i]==2){nn2++;
      n2--;
    }
    if(n2==nn2){
        k=i;
        break;
    }
}
if(k!=INT_MIN){
    cout<<k+1<<"\n";
}
else{
    cout<<-1<<"\n";
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