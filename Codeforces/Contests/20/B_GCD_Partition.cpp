#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
ll sum=0;
forn(i,n){
    cin>>a[i];
    sum+=a[i];
}
ll prefix_sum_i=0;
ll max_score=0;
for(ll i=0;i<n-1;i++){
    prefix_sum_i+=a[i];
   max_score=max(__gcd(sum-prefix_sum_i,prefix_sum_i),max_score);
}
cout<<max_score<<"\n";
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