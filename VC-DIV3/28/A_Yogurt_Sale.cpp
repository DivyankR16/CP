#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, a, b;
    cin >> n >> a >> b;
    if(2*a<=b){
        cout << n * a << "\n";
    }
    else{
        ll ans = (n / 2) * b;
        if(n%2){
            ans += a;
        }
        cout <<ans<< "\n";
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