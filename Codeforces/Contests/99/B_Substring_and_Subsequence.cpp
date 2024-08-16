#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    string a, b;
    cin >> a >> b;
    string hp = "";
    ll n = a.size();
    ll j = 0;
    ll m = b.size();
    ll ln = 0;
    while(j<m){
        ll k = j;
        ll cln = 0;
        forn(i,n){
            if(a[i]==b[k]){
                k++;
                cln++;
            }
        }
        ln = max(ln, cln);
        j++;
    }
    cout << n + m - ln << "\n";
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