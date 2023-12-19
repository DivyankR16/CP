#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    if(k==0){
        for (ll i = n; i >= 1;i--){
            cout << i << " ";
        }
        cout << "\n";
        return;
    }
    vector<ll> ans;
    ll val = 1;
    ans.push_back(val);
    while(val<=k){
        ans.push_back(val + 1);
        val++;
    }
    ll largestnumber = -1;
    ll sz = ans.size();
    if(ans[sz-1]!=n){
        largestnumber = ans[sz - 1] + 1;
    }
    if(largestnumber!=-1){
        ll num = n;
        while(num>=largestnumber){
            cout << num << " ";
            num--;
        }
    }
    for(auto i:ans){
        cout << i << " ";
    }
    cout << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}