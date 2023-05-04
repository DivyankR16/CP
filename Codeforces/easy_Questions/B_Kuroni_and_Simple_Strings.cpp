#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string s;
cin>>s;
ll n=s.length();
ll l=0;
ll r=n-1;
ll count=0;
set<ll>need;
while(l<r){
    while(l<r && s[l]!='(')l++;
    while(l<r && s[r]!=')')r--;
    if(l<r){
    need.insert(l+1);
    need.insert(r+1);}
    l++;
    r--;
}
ll sz=need.size();
if(sz==0){
    cout<<0<<endl;
}
else{
    cout<<1<<endl;
    cout<<sz<<endl;
    for(auto i:need){
        cout<<i<<" ";
    }
    cout<<endl;
}
}
int main(){
solve();
return 0;
}