#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    string s;
    cin >> s;
    ll n = s.size();
    if(n==1 && s[0]=='^'){
        cout << 1 << "\n";
        return;
    }
    ll i = 0;
    ll ans = 0;
    while (i < n){
        while(i<n && s[i]=='^')i++;
        ll cnt = 0;
        if(i==0)
            cnt++;
        while(i<n && s[i]=='_'){
            i++;
            cnt++;
        }
       if(i==n)
            cnt++;
       ans += cnt - 1;
    }
    cout<<ans<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}