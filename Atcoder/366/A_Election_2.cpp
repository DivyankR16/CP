#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, t, a;
    cin >> n >> t >> a;
    ll mn = min(t, a);
    ll mx = max(t, a);
    ll lf = n - (t + a);
    if(lf+mn<mx){
        cout << "Yes" << '\n';
    }
    else{
        cout << "No" << "\n";
    }
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}