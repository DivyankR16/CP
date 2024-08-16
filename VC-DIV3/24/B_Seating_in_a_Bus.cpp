#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    bool ans = true;
    vector<ll> mark(n+1, 0);
    for (ll i = 0; i < n;i++){
        if(!i){
            mark[a[i]] = 1;
        }
        else{
            bool cur = false;
            ll pr = a[i] - 1;
            ll fr = a[i] + 1;
            if(pr>=1){
                if(mark[pr]){
                    cur = true;
                }
            }
            if(fr<=n){
                if (mark[fr])
                {
                    cur = true;
                }
            }
            if(!cur){
                cout << "NO" << "\n";
                return;
            }
            mark[a[i]] = 1;
        }
    }
        cout << "YES" << "\n";
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