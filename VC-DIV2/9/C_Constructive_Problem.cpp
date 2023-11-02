#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll mexarr(ll a[],ll n){
    set<ll> s;
    forn(i,n){
        s.insert(a[i]);
    }
    ll ans = 0;
    for(auto i:s){
        if(i!=ans){
            return ans;
        }
        else{
            ans++;
        }
    }
    return ans;
}
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    map<ll, ll> mp;
    forn(i,n){
        mp[a[i]]++;
    }
    ll mex = mexarr(a, n)+1;
    ll firstidxMex = -1;
    ll endidxMex = -1;
    for (ll i = 0; i < n;i++){
        if(a[i]==mex){
            firstidxMex = i;
            break;
        }
    }
    for (ll i = n-1; i >= 0; i--)
    {
        if (a[i] == mex)
        {
            endidxMex = i;
            break;
        }
    }
    if(firstidxMex!=-1 && endidxMex!=-1){
        for (ll i = firstidxMex; i <= endidxMex;i++){
            if(a[i]<mex && mp[a[i]]==1){
                cout << "No" << '\n';
                return;
            }
            else{
                mp[a[i]]--;
            }
        }
        cout << "Yes"
             << "\n";
    }
    else{
        for(auto i:mp){
            if(i.first<mex && i.second>=2){
                cout << "Yes" << '\n';
                return;
            }
            if(i.first>mex){
                cout << "Yes"
                     << "\n";
                return;
            }
        }
        cout << "No"
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