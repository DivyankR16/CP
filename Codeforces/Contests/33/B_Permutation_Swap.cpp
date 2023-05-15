#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll p[n];
forn(i,n)cin>>p[i];
// ll dis=INT_MAX;
// bool check=true;
// forn(i,n){
//     if(abs(i-p[i]-1)!=0){
//         check=false;
//     if(abs(i-p[i]-1)<dis){
//         if(dis!=INT_MAX){
//            if(dis%abs(i-p[i]-1)==0){
//             dis=abs(i-p[i]-1);
//            }
//            else{
//             dis=1;
//            }
//         }
//         else{
//             dis=abs(i-p[i]-1);
//         }
//     }
//     }
// }
ll val=abs(0-p[0]+1);
for(ll i=1;i<n;i++){
    val=__gcd(val,abs(i-p[i]+1));
}
cout<<val<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}