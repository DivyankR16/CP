#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll x,y;
cin>>x>>y;
ll n=2*(x-y);
if(n==2){
    cout<<n<<" \n";
    cout<<y<<" "<<x<<"\n";
    return;
}
cout<<n<<"\n";
vector<ll>v;
v.push_back(x);
v.push_back(y);
ll meetingPoint=0;
ll val=x;
do{
    cout<<val<<" ";
    val--;
}while(val>=y);
val++;
while(val+1<x){
    val++;
    cout<<val<<" ";
}
cout<<"\n";
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}