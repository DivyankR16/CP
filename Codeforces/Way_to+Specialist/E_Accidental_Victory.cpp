#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
bool isSatisfy(vector<pair<ll,ll>>a,ll idx){
   ll n=a.size();
   ll i=0;
   ll sumval=a[idx].first;
   while(i<n){
     if(i!=idx){
       if(sumval>=a[i].first){
        sumval+=a[i].first;
        i++;
       }
       else{
        break;
       }
     }
     else{
        i++;
     }
   }
   if(i==n){
    return true;
   }
   else{
    return false;
   }
}
void solve(){
ll n;
cin>>n;
vector<pair<ll,ll>>a;
forn(i,n){
    ll x;
    cin>>x;
    a.push_back({x,i});
}
sort(a.begin(),a.end());
ll l=0;
ll r=n-1;
ll ansIdx=INT_MAX;
while(l<=r){
    ll mid=(l+r)/2;
    if(isSatisfy(a,mid)){
        ansIdx=min(ansIdx,mid);
        r=mid-1;
    }
    else{
        l=mid+1;
    }
}
vector<pair<ll,ll>>ans;
forn(i,n){
if(i>=ansIdx){
    ans.push_back({a[i].second,a[i].first});
}
}
cout<<ans.size()<<"\n";
if(ans.size()>0){
    sort(ans.begin(),ans.end());
    forn(i,ans.size()){
        cout<<ans[i].first+1<<" ";
    }
    cout<<"\n";
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