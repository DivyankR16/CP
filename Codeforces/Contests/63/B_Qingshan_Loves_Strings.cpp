#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    if(s.size()==1){
        cout << "Yes"
             << "\n";
        return;
    }
    bool ck = true;
    for (ll i = 0; i < n - 1;i++){
        if(s[i]==s[i+1]){
            ck = false;
            break;
        }
    }
    if(ck){
        cout << "YES" << '\n';
        return;
    }
        for (ll i = 0; i < m - 1; i++)
        {
            if (t[i] == t[i + 1])
            {
                cout << "No"
                     << "\n";
                return;
            }
        }
    if(t.size()!=1){
    char fst, scd;
    fst = t[0];
    scd = t[m - 1];
    if(fst!=scd){
            cout << "No"
                 << "\n";
            return;
    }
    for (ll i = 0; i < n-1;i++){
       if(s[i]==s[i+1]){
        if(s[i]==fst){
            cout << "No"
                 << "\n";
            return;
        }
       }
    }
    cout << "Yes"
         << "\n";
    }
    else{
    char fst = t[0];
    for (ll i = 0; i < n - 1; i++)
    {
       if (s[i] == s[i + 1])
       {
        if (s[i] == fst)
        {
            cout << "No"
                 << "\n";
            return;
        }
       }
    }
    cout << "Yes"
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