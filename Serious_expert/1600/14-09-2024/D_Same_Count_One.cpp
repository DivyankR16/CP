#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll> tree;
ll build(vector<ll>&a){
    ll n = a.size();
    forn(i,n){
        tree[i + n] = a[i];
    }
}
void solve(){
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m, -1));
    ll cnt = 0;
    forn(i,n){
        forn(j,m){
            cin >> a[i][j];
            if(a[i][j]==1){
                cnt++;
            }
        }
    }
    if(cnt%n!=0){
        cout << -1 << "\n";
    }
    else{
        ll on = cnt / n;
        vector<ll> id(m, 0);
        ll sx[n];
        forn(i,n){
            sx[i] = 0;
        }
        forn(i,n){
            ll cnt = 0;
            forn(j,m){
                if(a[i][j]==1)
                    cnt++;
            }
            if(cnt>on){
                sx[i] = 1;
            }
            else if(cnt<on){
                sx[i] = -1;
            }
        }
        for (ll i = 0; i < n;i++){
            
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