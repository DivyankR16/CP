#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll a[26];
    forn(i, 26) a[i] = 0;
    forn(i,n){
        a[s[i] - 'a']++;
    }
    ll oddcnt = 0;
    forn(i,26){
      if(a[i]%2==1)
          oddcnt++;
    }
    if(oddcnt-1>k){
      cout << "NO"
           << "\n";
    }
    else{
      cout << "YES"
           << "\n";
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