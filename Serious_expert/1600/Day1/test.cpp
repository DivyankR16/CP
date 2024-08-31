#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n,r;
    cin >> n>>r;
    double x = sqrt(n * n - r * r);
    cout << x << "\n";
    cout << floor(x) << "\n";
    cout << ceil(x) << "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}