#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll freq[n];
    memset(freq, 0, sizeof(freq));
    forn(i,n){
        freq[a[i]]++;
    }
    bool fst = true;
    for (ll i = 0; i < n;i++){
        if(freq[i]==0){
            cout << i << "\n";
            return;
        }
        else if(freq[i]==1){
            if(fst){
                fst = false;
            }
            else{
                cout << i << "\n";
                return;
            }
        }
    }
    cout << n << "\n";
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