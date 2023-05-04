#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll k;
cin>>k;
vector<ll>ans;
while(k>0){
    ans.push_back(k%9);
    k/=9;
}
reverse(ans.begin(),ans.end());
forn(i,ans.size()){
    if(ans[i]<4)cout<<ans[i];
    else cout<<ans[i]+1;
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