#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin >> n;
ll a[n];
forn(i, n) cin >> a[i];
bool isZero = false;
ll neg = 0;
forn(i,n){
   if(a[i]==0){
       cout << 0 << "\n";
       return;
   }
   if(a[i]<0){
       neg++;
   }
}
if(neg%2==0){
    cout << 1 << "\n";
    cout << 1 << " " << 0 << "\n";
}
else{
    cout << 0 << "\n";
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