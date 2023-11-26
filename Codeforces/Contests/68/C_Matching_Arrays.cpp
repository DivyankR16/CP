#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve()
{
    ll n, x;
    cin >> n >> x;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll b[n];
    forn(i, n) cin >> b[i];
    sort(b, b + n);
    vector<pair<ll,ll>> v;
    forn(i,n){
        v.push_back({a[i], i});
    }
    vector<pair<ll, ll>> ans;
    sort(v.begin(), v.end());
    ll i = 0;
    ll j = 0;
    ll cnt = 0;
    bool done[n];
    forn(i, n) done[i] = 0;
    while(i<n && j<n && cnt<x){
        if(v[i].first>b[j]){
            ans.push_back({b[j], v[i].second});
            done[i] = 1;
            cnt++;
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    if(cnt==x){
        ll end = n - 1;
        for (ll i = n - 1; i >= 0;i--){
            if(!done[i]){
                if(b[end]<v[i].first){
                    cout << "NO"
                         << "\n";
                    return;
                }
                else{
                    ans.push_back({b[end], v[i].second});
                    end--;
                }
            }
        }
        cout << "YES"
             << "\n";
        sort(ans.begin(), ans.end(), [](const auto &a, const auto &b)
             { return a.second < b.second; });
        for(auto i:ans){
            cout << i.first<<" ";
        }
        cout << "\n";
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