#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll sum = 0;
    forn(i,n){
        sum+=a[i];
    }
    ll st = 1;
    ll end = 1e9;
    bool check = false;
    while(st<=end){
        ll mid = st + (end - st) / 2;
        if(mid*mid>sum){
            end = mid - 1;
        }
        else if(mid*mid<sum){
            st = mid + 1;
        }
        else{
            check = true;
            break;
        }
    }
    if(check){
        cout << "YES"
             << "\n";
    }
    else{
        cout << "NO"
             << "\n";
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