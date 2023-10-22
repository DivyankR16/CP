#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll arr[26];
    memset(arr, 0, sizeof(arr));
    forn(i,n){
        arr[s[i] - 'a']++;
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