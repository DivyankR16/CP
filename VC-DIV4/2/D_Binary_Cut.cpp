#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    string s;
    cin >> s;
    ll n = s.size();
    ll cnt0 = 0;
    ll cnt1 = 0;
    forn(i,n-1){
       if(s[i]=='0' && s[i+1]=='1'){
           cnt0++;
       }
       else if (s[i] == '1' && s[i + 1] == '0'){
           cnt1++;
       }
    }
    if (max(0ll, cnt0 - 1) + 1 + cnt1 == 0)
    {
        cout << 1 << "\n";
        return;
    }
    cout << cnt1 + max(0ll, cnt0-1)+1 << "\n";
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