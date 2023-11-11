#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    bool check = true;
    forn(i,n-2){
        if(s[i]==s[i+1] && s[i+1]==s[i+2]){
            check = false;
        }
    }
    forn(i,m-2){
        if(t[i]==t[i+1] && t[i+1]==t[i+2]){
            check = false;
        }
    }
    if(n>1){
    if(s[n-1]==t[m-1] && s[n-2]==s[n-1]){
            check = false;
    }
    }
    if(m>1){
        if(s[n-1]==t[m-1] && t[m-1]==t[m-2]){
            check = false;
        }
    }
    if(check){
        cout << "YES"
             << "\n";
    }
    else{
        cout << "NO"
             << "\n";
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