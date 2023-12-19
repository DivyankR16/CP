#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll arr[26];
    ll ans = 0;
    forn(i,26){
        arr[i] = 0;
    }
    forn(i,n){
        arr[s[i] - 'A']++;
    }
    forn(i,26){
        if(arr[i]>=i+1){
            ans++;
        }
    }
    cout << ans << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}