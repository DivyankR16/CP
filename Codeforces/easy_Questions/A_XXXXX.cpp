#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,x;
cin>>n>>x;
ll a[n];
forn(i,n){
    cin>>a[i];
}
ll sum=0;
forn(i,n){
    sum+=a[i];
}
if(sum%x!=0){cout<<n<<endl;
return;}
ll ans=INT_MIN;
forn(i,n){
    if(a[i]%x!=0 && i<=n/2){
        ans=max(ans,n-i-1);
    }
    else if(a[i]%x!=0 && i>n/2){
        ans=max(ans,i);
    }
}
if(ans!=INT_MIN){
    cout<<ans<<endl;
}
else{
    cout<<-1<<endl;
}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}