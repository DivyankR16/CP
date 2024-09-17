#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    char a[n][4];
    forn(i,n){
        forn(j,4){
            cin >> a[i][j];
        }
    }
    for (ll i = n - 1; i >= 0;i--){
        for (ll j = 0; j < 4;j++){
            if(a[i][j]=='#'){
                cout << j + 1 << " ";
            }
        }
    }
    cout << "\n";
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