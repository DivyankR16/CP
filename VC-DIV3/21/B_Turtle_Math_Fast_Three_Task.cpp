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
        sum += a[i];
    }
    if(sum%3==0){
        cout << 0 << "\n";
    }
    else if(sum%3==2){
        cout << 1 << "\n";
    }
    else{
        forn(i,n){
            if(a[i]%3==1){
                cout << 1 << "\n";
                return;
            }
        }
        cout << 2 << "\n";
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