#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll> memo;
// Minimum number of steps required for a number to reduce it to 1 using following operations:-
//  1) n%3==0, then n/=3
//  2) n%2==0, then n/=2
//  3) not then n--
// You can choose any of the possible steps at a time
ll recur(ll n){
    if(n==1){
        return 0;
    }
    if(memo[n]!=-1)
        return memo[n];
    ll ans = INT_MAX;
    if(n%2==0){
        ans = min(ans, recur(n / 2));
    }
    if(n%3==0){
        ans = min(ans, recur(n / 3));
    }
    ans = min(ans, recur(n - 1));
    ans++;
    return ans;
}
void solve(){
    ll n;
    cin >> n;
    forn(i,n+1){
        memo.push_back(-1);
    }
    cout<<"Number of steps required for this will be:- "<<recur(n)<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}