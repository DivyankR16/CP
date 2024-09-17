#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m;
    cin >> n >> m;
    ll cnt = 0;
    vector<vector<ll>> v(n, vector<ll>(m, -1));
    forn(i,n){
        forn(j,m){
            cin >> v[i][j];
            if(v[i][j]==1){
                cnt++;
            }
        }
    }
    if(cnt & 1){
        cout << -1 << "\n";
    }
    else{
        for(auto i:v){
            for(auto e:i){
                cout << e << " ";
            }
            cout << "\n";
        }
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