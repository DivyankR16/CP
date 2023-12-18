#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    string s;
    cin >> s;
    ll n = s.size();
    ll ones = 0;
    ll zeros = 0;
    forn(i,n){
        if(s[i]=='0'){
            zeros++;
        }
        else{
            ones++;
        }
    }
    if(ones==zeros){
        cout << 0 << "\n";
        return;
    }
    ll one[n];
    ll zero[n];
    forn(i,n){
        one[i] = 0;
        zero[i] = 0;
    }
    forn(i,n){
        if(s[i]=='0'){
            zero[i]+=1;
        }
        if(s[i]=='1'){
            one[i]+=1;
        }
        zero[i] += (i ? zero[i - 1] : 0);
        one[i] += (i ? one[i - 1] : 0);
    }
    // cout << one[n - 1] << "\n";
    ll ans = 0;
    for (ll i = n - 1; i >= 0;i--){
        if(one[i]>zeros || zero[i]>ones){
             ans++;
        }
        else{
            break;
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