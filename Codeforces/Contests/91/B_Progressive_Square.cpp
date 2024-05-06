#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, c, d;
    cin >> n >> c >> d;
    ll N = n * n;
    ll a[N];
    multiset<ll> s;
    forn(i,N){
        cin >> a[i];
        s.insert(a[i]);
    }
    ll ans[n][n];
    forn(i,n){
        forn(j,n){
            ans[i][j] = -1;
        }
    }
    auto it = s.begin();
    ans[0][0] = *it;
    s.erase(it);
    for (ll i = 0; i < n;i++){
        for (ll j = 0; j < n;j++){
            ll cur = ans[i][j];
            if(j+1<n && ans[i][j+1]==-1){
            if(s.find(cur+d)!=s.end()){
                ans[i][j + 1] = cur + d;
                s.erase(s.find(cur + d));
            }
            else{
                cout << "NO"
                     << "\n";
                return;
            }
            }
            if(i+1<n && ans[i+1][j]==-1){
            if (s.find(cur + c) != s.end())
            {
                ans[i+1][j] = cur + c;
                s.erase(s.find(cur + c));
            }
            else{
                cout << "NO"
                     << "\n";
                return;
            }
            }
        }
    }
    cout << "YES"
         << "\n";
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