#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve1()
{
    int n;
    scanf("%d", &n);
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        m[x]++;
    }
    int ans = 0;
    if (n & 1)
        ans++;
    for (auto it : m)
    {
        ans = max(ans, n - (n - it.second) * 2);
    }
    printf("%d\n", ans);
}

void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    priority_queue<pair<ll, ll>> q;
    map<ll, ll> mp;
    forn(i,n){
        mp[a[i]]++;
    }
    for(auto i:mp){
        q.push({i.second, i.first});
    }
    ll ans = n;
    while(q.size()>=2){
        auto [cnt1,e1]=q.top();
        q.pop();
        auto [cnt2, e2] = q.top();
        q.pop();
        cnt1--;
        cnt2--;
        ans -= 2;
        if(cnt1){
            q.push({cnt1, e1});
        }
        if(cnt2){
            q.push({cnt2, e2});
        }
    }
    cout << ans << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}