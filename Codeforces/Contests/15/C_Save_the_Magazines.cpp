#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
string s;
cin>>s;
ll a[n];
forn(i,n)cin>>a[i];
ll ans=0;
//forn(i,n){
//    if(s[i]=='1'){
//        ans+=a[i];
//    }
//}
////forn(i,n-1){
////    if(s[i]=='0' && s[i+1]=='1'){
////        if(a[i]>=a[i+1]){
////        swap(s[i],s[i+1]);
////          ans-=a[i+1];
////          ans+=a[i];}
////          else if(i<n-2 && a[i]<=a[i+1] && a[i]>=a[i+2] && s[i+2]=='1'){
////          swap(s[i],s[i+1]);
////          ans-=a[i+1];
////          ans+=a[i];
////          }
////    }
////}
//for (ll i = n-1; i >= 1; i--)
//{if(s[i]=='1' && s[i-1]=='0' && a[i-1]>a[i]){
//    ans-=a[i];
//    ans+=a[i-1];
//}
//}
ll i=0;
ll j=0;
while(i<n){
    if(i <n-1 && s[i]=='0' && s[i+1]){
        swap(s[i],s[i+1]);
        j=i;
    }
}
cout<<ans<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}