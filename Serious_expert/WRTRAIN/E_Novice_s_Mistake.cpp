#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll d = 1;
    if(n>=10){
        d = 2;
    }
    if(n==100){
        d = 3;
    }
    vector<pair<ll, ll>> v;
    for (ll a = 1; a <= 1e4;a++){
        ll D = a * d;
        for (ll b = max(1ll, D - 6); b <= min(D,(ll)1e4);b++){
            string num = "";
            string add = to_string(n);
            ll digits = D - b;
            while(d<=digits){
                num += add;
                digits -= d;
            }
            if(digits){
                num += add.substr(0,digits);
            }
            if(num!="" && stoll(num)==n*a-b){
                v.push_back({a, b});
            }
        }
    }
    cout << v.size() << "\n";
    for(auto i:v){
        cout << i.first << " " << i.second << "\n";
    }
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