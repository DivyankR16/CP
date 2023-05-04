#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
vector<ll>a(n);
forn(i,n){
    cin>>a[i];
}
if(n==1){
    cout<<0<<endl;
    return;
}
vector<pair<ll,ll>>ans;
ans.push_back({1,n});
if((a[0]+a[n-1])%2){
    a[n-1]=a[0];
}
else{
    a[0]=a[n-1];
}
ll even=a[0]%2;
for (ll i = 1; i < n-1; i++)
{
    if(even==0){
        if(a[i]%2){
            ans.push_back({1,i+1});
        }
        else{
            ans.push_back({i+1,n});
        }
    }
    else{
         if(a[i]%2==0){
            ans.push_back({1,i+1});
        }
        else{
            ans.push_back({i+1,n});
        }
    }
}
cout<<ans.size()<<endl;
for(auto i:ans){
    cout<<i.first<<" "<<i.second<<endl;
}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}