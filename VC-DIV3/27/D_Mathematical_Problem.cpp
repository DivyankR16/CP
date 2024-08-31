#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll> memo;
ll recur(ll i,ll idx,string &s,ll n,char prev){
    if(i==n){
        if(prev=='+'){
            return 0;
        }
        else{
            return 1;
        }
    }
    if(memo[i]!=-1){
        return memo[i];
    }
    ll ans1 = INT_MAX;
    ll ans2 = INT_MAX;
    if(i==idx){
        ans1 = min(ans1, stoll(s.substr(i, 2)) + recur(i + 2, idx, s, n,'+'));
        ans2 = min(ans2, stoll(s.substr(i, 2)) * recur(i + 2, idx, s, n,'*'));
    }
    else{
        ans1 = min(ans1, (s[i] - '0') + recur(i + 1, idx, s, n,'+'));
        ans2 = min(ans2, (s[i] - '0') * recur(i + 1, idx, s, n,'*'));
    }
    return memo[i]=min(ans1, ans2);
}
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = INT_MAX;
    
    for (ll i = 0; i < n-1;i++){
        memo.assign(n,-1);
        ans = min(ans, recur(0, i, s, n, '-'));
    }
    cout << ans << "\n";
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