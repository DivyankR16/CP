#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    vector<ll> non2;
    forn(i,n){
        if(__builtin_popcountll((i+1))!=1){
            non2.push_back(a[i]);
        }
    }
    bool ck = true;
    forn(i,non2.size()-1){
        if(non2[i]>non2[i+1]){
            ck = false;
            break;
        }
    }
    if(!ck){
        cout << "NO"
             << "\n";
        return;
    }
    bool ck2 = true;
    for (ll i = 2; i < n;i++)
    {
        if (__builtin_popcountll((i + 1)) == 1){
            if(a[i]<a[i-1]){
                ck2 = false;
                break;
            }
        }
    }
    if(!ck2){
        cout << "NO"
             << "\n";
        return;
    }
    cout << "YES"
         << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}