#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
cout << 2 << '\n';
    for (int i = 1; i <= n; ++i){ 
    if (i % 2 != 0){
      for (int j = i; j <= n; j *= 2){
        cout << j << ' ';}}}
    cout << '\n';
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}