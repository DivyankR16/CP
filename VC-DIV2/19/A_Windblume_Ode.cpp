#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
bool isPrime(ll n){
    if(n==2 || n==3)
        return true;
    for (ll i = 2; i * i <= n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll sum = 0;
    forn(i,n){
        sum += a[i];
    }
    if(sum%2==0 || !isPrime(sum)){
        cout << n << "\n";
        forn(i,n){
            cout << i + 1 << " ";
        }
        cout << "\n";
    }
    else{
        ll excluded = -1;
        cout << n - 1 << "\n";
        forn(i,n){
            if(a[i]%2==1){
                excluded = i;
                break;
            }
        }
        forn(i,n){
            if(i!=excluded){
                cout << i + 1 << " ";
            }
        }
        cout << "\n";
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