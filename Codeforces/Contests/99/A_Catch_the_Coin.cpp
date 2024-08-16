#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    forn(i,n){
        ll x, y;
        cin >> x >> y;
        if(y<=-2){
            cout << "NO" << "\n";
        }
        else{
            cout << "YES" << "\n";
        }
    }
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}