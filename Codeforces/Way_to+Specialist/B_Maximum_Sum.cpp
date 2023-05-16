#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
ll ans=0;
ll a[n];
forn(i,n){cin>>a[i];
ans+=a[i];}
sort(a,a+n);
// ll i=0;
// ll j=n-1;
// while(k--){
//     if(a[i]+a[i+1]<a[j]){
//         i+=2;
//         ans-=(a[i]+a[i+1]);
//     }
//     else if(a[i]+a[i+1]>a[j]){
//         j--;
//         ans-=(a[j]);
//     }
//     else{

//     }
// }
ll check=0;
forn(i,2*k){
   check+=a[i];
}
ll val=k;
ll ANS=ans-check;
ll endidx=n-1;
ll need=ANS;
ll indc=2*k-1;
while(val--){
   need+=(a[indc]+a[indc-1]);
   need-=a[endidx];
   ANS=max(ANS,need);
   endidx--;
   indc-=2;
}
cout<<ANS<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}