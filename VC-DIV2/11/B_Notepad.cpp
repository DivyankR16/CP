#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if(n==1 || n==2){
        cout << "NO" << "\n";
        return;
    }
    map<string, ll> mp;
    string st = "";
    st += s[0];
    st += s[1];
    mp[st] = 1;
    for (ll i = 2; i < n;i++){
        string check = "";
        check += s[i - 1];
        check += s[i];
        if(mp.find(check)!=mp.end() && mp[check]!=i-1){
            cout<<"YES"<<"\n";
            return;
        }
        if(mp.find(check)==mp.end()){
            mp[check] = i;
        }
    }
    cout << "NO"
         << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}