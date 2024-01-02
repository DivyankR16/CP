#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll a, b;
    cin >> a >> b;
    // cout << min(2ll,min(a,b))*((a * b) / __gcd(a, b)) << "\n";
    ll lcm = (a * b) / __gcd(a, b);
    if(lcm==b){
        for (ll i = 2; i * i <= b;i++){
            if(i<=a && a%i==0){
                cout << lcm * i << "\n";
                return;
            }
            else if(b%i==0){
                cout << lcm * i << "\n";
                return;
            }
        }
            cout << lcm * lcm << "\n";
    }
    else{
        cout << lcm << "\n";
    }
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}