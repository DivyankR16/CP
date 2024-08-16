#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    forn(i,n){
        ll fst = a[i];
        for (ll j = 0; j < n;j++){
            if (i == j)
            {
                continue;
            }
            ll scd= a[j];
            vector<ll> s;
            for (ll k = 0; k < n;k++){
                if(k!=i && k!=j){
                    s.push_back(a[k]);
                }
            }

            ll diff = abs(*max_element(s.begin(),s.end())-*min_element(s.begin(),s.end()));
            if(diff!=abs(fst-scd)){
                cout << "YES" << "\n";
                for (ll k = 0; k < n;k++){
                    if(k==i || k==j){
                        cout << "R";
                    }
                    else{
                        cout << "B";
                    }
                }
                cout << "\n";
                return;
            }
        }
    }
    cout << "NO" << "\n";
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