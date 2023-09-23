#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
string s;
cin>>s;
ll l=0;
ll r=n-1;
while(s[l]-'0'==!(s[r]-'0') && l<r){
    l++;
    r--;
}
cout<<r-l+1<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}