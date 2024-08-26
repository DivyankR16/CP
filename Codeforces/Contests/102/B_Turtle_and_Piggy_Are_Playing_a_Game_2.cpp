#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    vector<ll> a;
    forn(i,n){
        ll x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    ll i = 0;
    ll j = n - 1;
    bool t = true;
    while(i<j){
        if(t){
            i++;
            t = !t;
        }
        else{
            j--;
            t = !t;
        }
    }
    cout << a[i] << "\n";
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