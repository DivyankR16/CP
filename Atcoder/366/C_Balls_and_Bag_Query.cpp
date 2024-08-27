#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll q;
    cin >> q;
    map<ll, ll> mp;
    while(q--){
        ll type;
        cin >> type;
        if(type==1){
            ll x;
            cin >> x;
            mp[x]++;
        }
        else if(type==2){
            ll x;
            cin >> x;
            if(mp.find(x)!=mp.end()){
                mp[x]--;
                if(mp[x]==0){
                    mp.erase(x);
                }
            }
        }
        else{
            cout << mp.size() << "\n";
        }
    }
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}