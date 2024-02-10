#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> ans;
    ll cnt = 1;
    while(cnt<k){
        ans.push_back(ans[ans.size() - 1] - (n - cnt++) / k - 1);
    }
    cnt = 1;
    while(cnt<k){
        ans[cnt ] = ans[cnt+1] + 1;
        cnt -= 2;
    }
    bool ck = false;
    bool ck2 = true;
    while(ans.size()<n){
         if(!ck){
             ans.pop_back();
             ck = true;
         }
         if(ck2){
             ans.push_back(ans[0] + 1);
             ck2 = !ck2;
         }
         else{
             ans.push_back(ans[0] - 1);
             ck2 = !ck2;
         }

    }
    for(auto i:ans){
        cout << i << " ";
    }
    cout << "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}