#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    string s;
    cin >> s;
    if(s.size()==2){
        if(s[0]>=s[1]){
            cout << -1 << "\n";
        }
        else{
            cout << s[0] << " " << s[1] << "\n";
        }
        return;
    }
    ll n = s.size();
    ll i = 0;
    string fst = "";
    fst += s[0];
    i++;
    while(i<n && s[i]=='0'){
        fst += s[i];
        i++;
    }
    string scd ="";
    while(i<n){
        scd += s[i];
        i++;
    }
    if(scd==""){
        cout << -1 << "\n";
        return;
    }
    ll val1 = stoll(fst);
    ll val2 = stoll(scd);
    if(val2>val1){
        cout << fst << " " << scd << "\n";
    }
    else{
        cout << -1 << "\n";
    }
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}