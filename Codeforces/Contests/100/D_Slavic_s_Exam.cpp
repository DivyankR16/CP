#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    string s;
    cin >> s;
    string t;
    cin >> t;
    ll i = 0;
    ll j = 0;
    ll n = s.size();
    ll m = t.size();
    while(i<n){
        if(j==m)break;
        if(s[i]==t[j]){
            j++;
        }
        else if(s[i]=='?'){
            s[i] = t[j];
            j++;
        }
        i++;
    }
    for (ll i = 0; i < n;i++){
        if(s[i]=='?'){
            s[i] = 'a';
        }
    }
    if(j==m){
        cout << "YES" << "\n";
        cout << s << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
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