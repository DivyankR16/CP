#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin>>n;
    vector<char> v;
    v.push_back('a');
    v.push_back('e');
    v.push_back('i');
    v.push_back('o');
    v.push_back('u');
    if(n<=5){
        for (ll i = 0; i < n;i++){
            cout << v[i];
        }
        cout << "\n";
        return;
    }
    ll each = n / 5;
    ll extra = n % 5;
    string ans = "";
    ll j = 0;
    while(j<5){
    forn(i,each){
        ans += v[j];
    }
    if (extra)
    {
        ans += v[j];
        extra--;
    }
    j++;
    }
    cout << ans << "\n";
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