#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll x, k;
    cin >> x >> k;
    ll sum = 0;
    ll num = x;
    while(num){
        sum += num % 10;
        num /= 10;
    }
    if(sum%k==0){
        cout << x << "\n";
    }
    else{
        ll factor = 0;
        while(true){
        ll sum = 0;
        ll num = x+factor;
            while(num){
                sum += num % 10;
                num /= 10;
            }
            if(sum%k==0){
                cout << x+factor<< "\n";
                return;
            }
            factor++;
        }
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