#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    char a[n][n];
    forn(i,n){
        forn(j,n){
            cin >> a[i][j];
        }
    }
    vector<vector<char>> ans;
    for (ll i = 0; i < n;i+=k){
        vector<char> tmp;
        for (ll j = 0; j < n;j+=k){
            tmp.push_back(a[i][j]);
        }
        ans.push_back(tmp);
    }
    for(auto i:ans){
        for(auto j:i){
                cout << j;
        }
        cout << "\n";
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