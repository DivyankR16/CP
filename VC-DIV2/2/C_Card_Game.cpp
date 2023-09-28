#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
// ll lowestpos=-1;
// ll lowestposindx=-1;
// ll largestneg=1;
// ll largestnegindx=-1;
// forn(i,n){
//     if(a[i]>0){
//         if(lowestpos==-1){
//             lowestpos=a[i];
//             lowestposindx=i;
//         }
//         else{
//             if(a[i]<lowestpos){
//                 lowestpos=a[i];
//                 lowestposindx=i;
//             }
//         }
//     }
//     if(a[i]<0){
//         if(largestneg==1){
//             largestneg=a[i];
//             largestnegindx=i;
//         }
//         else{
//             if(a[i]>largestneg){
//                 largestneg=a[i];
//                 largestnegindx=i;
//             }
//         }
//     }
// }
ll ans=0;
ll sum=0;
for(ll i=n-1;i>=0;i--){
    if(i%2==0){
        ans=max(ans,sum+a[i]);
    }
    else{
        ans=max(ans,sum);
    }
    sum+=max(a[i],(ll)0);
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