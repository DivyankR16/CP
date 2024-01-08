#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> v;
    forn(i,n){
        if(v.size()==0){
            if(s[i]=='+'){
                v.push_back(1);
            }
            else{
                v.push_back(-1);
            }
        }
        else{
            ll val = 1;
            if(s[i]=='+'){
                val = 1;
            }
            else{
                val = -1;
            }
            if(v[0]!=val){
                v.pop_back();
            }
            else{
                v.push_back(val);
            }
        }
    }
    cout << v.size() << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}