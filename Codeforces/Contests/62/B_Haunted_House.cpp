#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll moves[n+1];
    forn(i,n+1){
        moves[i] = -1;
    }
    ll idx = 1;
    ll cnt = 0;
    for (ll i = n - 1; i >= 0;i--){
       if(s[i]=='0'){
           moves[idx] = (idx>1?moves[idx-1]+cnt:cnt);
           idx++;
       }
       else{
           cnt++;
       }
    }
    for (ll i=1; i < n + 1;i++)
    {
       cout << moves[i] << " ";
    }
    cout << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}