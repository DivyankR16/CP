#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m;
    cin >> n >> m;
    char a[n][m];
    forn(i,n){
        forn(j,m){
            cin >> a[i][j];
        }
    }
    ll mxc = 0;
    ll r = -1;
    for (ll i = 0; i < n;i++){
        ll cnt = 0;
        for (ll j = 0; j < m;j++){
            if(a[i][j]=='#'){
                cnt++;
            }
        }
        if (cnt > mxc)
        {
            mxc = cnt;
            r = i;
        }
    }
    ll c = -1;
    for (ll j = 0; j < m;j++){
        if(a[r][j]=='#'){
            c = j;
            break;
        }
    }
    c += mxc/2;
    cout << r + 1 << " " << c + 1 << "\n";
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