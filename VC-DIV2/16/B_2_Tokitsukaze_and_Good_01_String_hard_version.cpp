#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin>>n;
    string s;
    cin >> s;
    ll resp = 0;
    ll min = 1;
    vector<ll> v;
    for (ll i = 0; i < n; i += 2)
    {
        if (s[i] != s[i + 1])
            resp++;
        else
            v.push_back(s[i] - '0');
    }

    for (ll i = 1; i < v.size(); i++)
    {
        if (v[i] != v[i - 1])
            min++;
    }
    // cout << s << endl;
    cout << resp << " " << min << endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}