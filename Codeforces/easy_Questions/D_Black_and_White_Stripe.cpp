#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
string s;
cin>>s;
ll arr[n];
forn(i,n){
    if(s[i]=='B'){
        arr[i]=1;
    }
    else{
        arr[i]=0;
    }
}
for(ll i=1;i<n;i++){
    arr[i]+=arr[i-1];
}
ll sum=arr[k-1];
for (ll i = 1; i < n-k+1; i++)
{sum=max(sum,arr[i+k-1]-arr[i-1]);}
cout<<k-sum<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}