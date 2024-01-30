#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll M[n][n];
    ll ans[n];
    forn(i,n){
        forn(j,n){
            cin >> M[i][j];
        }
    }
    forn(i,n){
            ans[i] = (1 << 30) - 1;
    }
    for (ll i = 0; i < n;i++){
        for (ll j = 0; j< n;j++){
            if(i!=j){
            ans[i] &= M[i][j];
            ans[j] &= M[i][j];
            }
        }
    }
    forn(i,n){
        forn(j,n){
            if(i!=j){
                if((ans[i]|ans[j])!=M[i][j]){
                    cout << "NO"
                         << "\n";
                    return;
                }
            }
        }
    }
    cout << "YES"
         << "\n";
    for(auto i:ans){
        cout << i << " ";
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