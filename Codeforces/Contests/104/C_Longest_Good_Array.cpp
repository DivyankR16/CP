#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll l, r;
    cin >> l >> r;
    ll i = l;
    ll df = 1;
    while(i+df<=r){
        i += df;
        df++;
    }
    cout << df << "\n";
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