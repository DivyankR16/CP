#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n,c;
    cin >> n >> c;
    ll a[n];
    forn(i, n) cin >> a[i];
    a[0] += c;
    ll pref[n];
    pref[0] = a[0];
    for (ll i = 1; i < n;i++){
        pref[i] = pref[i - 1] + a[i];
    }
    ll mx = -1;
    ll idx = -1;
    for (ll i = 0; i < n;i++){
        mx = max(mx, a[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        if(mx==a[i]){
            idx = i;
            break;
        }
    }
        for (ll i = 0; i < n; i++)
        {
            if (!i)
            {
                if (a[i] < mx)
                {
                    cout << 1 << " ";
                }
                else{
                cout << 0 << " ";
            }
        }
        else{
            if(a[i]==mx){
                if(idx==i){
                    cout << 0 << " ";
                }
                else{
                    cout << i << " ";
                }
            }
            else{
                if(pref[i-1]+a[i]>=mx){
                    cout << i << " ";
                }
                else{
                    cout << i + 1 << " ";
                }
            }
        }

    }
    cout << "\n";
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