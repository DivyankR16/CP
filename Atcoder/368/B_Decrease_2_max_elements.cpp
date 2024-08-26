#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    priority_queue<ll> p;
    forn(i,n){
        p.push(a[i]);
    }
    // while(!p.empty()){
    //     cout << p.top() << " ";
    //     p.pop();
    // }
    // cout << "\n";
    ll ans = 0;
    while(true){
        ll tp1 = p.top();
        p.pop();
        ll tp2 = p.top();
        p.pop();
        if(tp1<=0 || tp2<=0){
            break;
        }
        tp1--;
        tp2--;
        ans++;
        p.push(tp1);
        p.push(tp2);
    }
    cout << ans << "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}