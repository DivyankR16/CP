#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n];
    forn(i, n) cin >> a[i];
    deque<ll> dq;
    forn(i,n){
        dq.push_back(a[i]);
    }
    ll ans = 0;
    while(dq.size()>1 && k){
        ll need = min(dq.front(), dq.back());
        if(k<2*need){
            dq.front() -= k / 2 + k % 2;
            dq.back() -= k / 2;
            k = 0;
        }
        else{
            dq.front() -= need;
            dq.back() -= need;
            k -= 2 * need;
        }
        if(dq.front()==0){
            dq.pop_front();
            ans++;
        }
        if(dq.back()==0){
            dq.pop_back();
            ans++;
        }
    }
    cout << ans+(dq.size() && k>=dq.front()) << "\n";
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