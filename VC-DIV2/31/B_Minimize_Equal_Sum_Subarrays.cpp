#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    forn(i,n){
        if(a[i]==n){
            cout << 1 << " ";
        }
        else{
        cout << (a[i] + 1) % (n+1) << " ";
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