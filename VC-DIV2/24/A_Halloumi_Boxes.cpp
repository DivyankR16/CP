#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n];
    forn(i, n) cin >> a[i];
    bool isSorted = true;
    for (ll i = 0; i < n - 1;i++){
        if(a[i]>a[i+1]){
            isSorted = false;
        }
    }
    if(isSorted){
        cout << "YES"
             << "\n";
    }
    else{
        if(k>=2){
            cout << "YES"
                 << "\n";
        }
        else{
            cout << "NO"
                 << "\n";
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