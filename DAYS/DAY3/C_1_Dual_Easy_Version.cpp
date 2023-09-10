#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n){cin>>a[i];}
ll moves=0;
// if(isallneg){
//     vector<pair<ll,ll>>ans;
// for(ll i=n-1;i>=1;i--){
//     ans.push_back({i-1,i});
//     moves++;
// }
// cout<<moves<<"\n";
// forn(i,moves){
//     cout<<ans[i].first+1<<" "<<ans[i].second+1<<"\n";
// }
// }
// else{
    vector<pair<ll,ll>>ans;
    ll idx=0;
    while(idx<n && a[idx]<=0){
        idx++;
    }
    if(idx){
    for(ll i=idx-1;i>0;i--){
        moves++;
        ans.push_back({i-1,i});
        a[i-1]+=a[i];
    }}
    if(idx)idx--;
    for(ll i=idx;i<n-1;i++){
        if(a[i]>a[i+1]){
            if(a[i]>0 && a[i+1]>0){
                moves++;
                ans.push_back({i+1,i});
                a[i+1]+=a[i];
            }
            else if(a[i]<=0 && a[i+1]<=0){
                moves++;
                ans.push_back({i,i+1});
                a[i]+=a[i+1];
            }
            else{
                if(a[i]<24){
                forn(l,5){
                    moves++;
                    ans.push_back({i,i});
                    a[i]+=a[i];
                }}
                forn(l,2){
                    moves++;
                    ans.push_back({i+1,i});
                    a[i+1]+=a[i];
                }
            }
        }
    }
cout<<moves<<"\n";
forn(i,moves){
cout<<ans[i].first+1<<" "<<ans[i].second+1<<"\n";
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