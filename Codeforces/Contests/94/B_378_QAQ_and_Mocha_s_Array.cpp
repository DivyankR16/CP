#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    sort(a, a + n);
    vector<bool> c(n, 0);
    for (ll i = 0; i < n;i++){
        if(a[i]%a[0]==0){
            c[i] = 1;
        }
    }
    ll idx = -1;
    for (ll i = 0; i < n;i++){
        if(!c[i]){
            idx = i;
            break;
        }
    }
    if(idx!=-1){
        for (ll i = idx; i < n;i++){
            if(a[i]%a[idx]==0){
                c[i] = 1;
            }
        }
    }
    bool ans = true;
    for (ll i = 0; i < n;i++){
        if(!c[i]){
            ans = false;
        }
    }
    if(ans){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";
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