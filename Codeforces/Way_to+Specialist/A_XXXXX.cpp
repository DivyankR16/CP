#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,x;
cin>>n>>x;
ll sum=0;
ll a[n];
forn(i,n){cin>>a[i];
sum+=a[i];}
if(sum%x!=0){
    cout<<n<<"\n";
    return;
}
ll i=0;
ll j=n-1;
ll ans=-1;
while(i<=j){
   if(a[i]%x!=0){
    ans=n-(i+1);
    break;
   }
   if(a[j]%x!=0){
    ans=j;
    break;
   }
   i++;
   j--;
}
cout<<ans<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}