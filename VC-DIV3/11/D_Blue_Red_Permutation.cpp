#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    string s;
    cin >> s;
    vector<ll> red;
    vector<ll> blue;
    forn(i,n){
       if(s[i]=='B'){
           blue.push_back(a[i]);
       }
       else{
           red.push_back(a[i]);
       }
    }
    sort(red.begin(), red.end());
    sort(blue.begin(), blue.end());
    ll val = 1;
    for (ll i = 0; i < blue.size();i++){
        if(blue[i]>=val){
            val++;
        }
        else{
            cout << "NO"
                 << "\n";
            return;
        }
    }
    for (ll i = 0; i < red.size();i++){
        if(red[i]<=val){
            val++;
        }
        else{
            cout << "NO"
                 << "\n";
            return;
        }
    }
    cout << "YES"
         << "\n";
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