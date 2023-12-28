#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll max_substring(string b,string a){
    ll a_size = a.size();
    ll b_size = b.size();
    ll i = 0;
    ll ans = 0;
    while(i<b_size){
        ll j = 0;
        ll cnt = 0;
        while(i<b_size && j<a_size && b[i]==a[j]){
            i++;
            j++;
            cnt++;
        }
        if(!cnt){
            i++;
        }
        ans = max(cnt, ans);
    }
    if(ans==a_size){
        return a_size;
    }
    else{
        return 0;
    }
}
void solve(){
    string a, b;
    cin >> a >> b;
    ll a_size = a.size();
    ll b_size = b.size();
    ll ans = 0;
    for (ll len = 1; len <= min(a_size, b_size);len++){
        for (ll i=0; i + len <= a_size;i++){
            for (ll j = 0; j + len <= b_size;j++){
                if(a.substr(i,len)==b.substr(j,len)){
                    ans = max(ans, len);
                }
            }
        }
    }
        cout << a_size+b_size-2*ans << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}