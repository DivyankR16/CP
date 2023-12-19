#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    string s;
    cin >> s;
    ll n = s.size();
    ll arr[26];
    forn(i,26){
        arr[i] = 0;
    }
    ll len = 0;
    forn(i,n){
        if(arr[s[i]-'a']){
            len += 2;
            forn(j, 26) arr[j] = 0;
        }
        else{
            arr[s[i] - 'a'] = 1;
        }
    }
    cout << n - len << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}