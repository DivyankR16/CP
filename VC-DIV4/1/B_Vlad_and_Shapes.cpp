#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    char a[n][n];
    forn(i,n){
        forn(j,n){
            cin >> a[i][j];
        }
    }
    for (ll i = 0; i < n;i++){
        ll rcnt = 0;
        for (ll j = 0; j < n;j++){
            if(a[i][j]=='1'){
                rcnt++;
            }
        }
        if(rcnt==1){
            cout << "TRIANGLE"
                 << "\n";
            return;
        }
    }
    cout << "SQUARE"
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