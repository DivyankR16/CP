#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll m;
    cin >> m;
    vector<ll> power(32, 0);
    forn(i,m){
        ll t, v;
        cin >> t;
        if(t==1){
            ll x;
            cin >> x;
            power[x]++;
        }
        else{
            ll w;
            cin >> w;
            vector<ll> temp = power;
            ll rs = 0;
            bool ans = true;
            for (rs = 0; rs < 31;rs++){
                if(w>>rs & 1){
                    if(temp[rs]){
                        temp[rs]--;
                    }
                    else{
                        cout << "NO"
                             << "\n";
                        ans = false;
                        break;
                    }
                }
                rs++;
                temp[rs] += temp[rs - 1] / 2;
                rs--;
            }
        if(!ans)
            continue;
        cout << "YES"
             << "\n";
        }
    }
}
int main(){
solve();
return 0;
}