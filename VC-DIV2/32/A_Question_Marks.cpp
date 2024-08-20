#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll a = 0;
    ll b = 0;
    ll c = 0;
    ll d = 0;
    for (ll i = 0; i < 4 * n;i++){
        if(s[i]=='A')a++;
        if(s[i]=='B')b++;
        if(s[i]=='C')c++;
        if(s[i]=='D')d++;
    }
    cout << min(n, a) + min(n, b) + min(n, c) + min(n, d) << "\n";
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