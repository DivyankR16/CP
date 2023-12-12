#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    string s;
    cin >> s;
    ll n = s.size();
    ll isb = 0;
    ll icb = 0;
    bool remove[n];
    forn(i,n){
        remove[i] = 0;
    }
    for (ll i = n - 1; i >= 0;i--){
       if(s[i]=='b'){
           remove[i] = 1;
           isb++;
           continue;
       }
       if(s[i]=='B'){
           icb++;
           remove[i] = 1;
           continue;
       }
       if(s[i]-'a'>=0 && s[i]-'a'<=25){
           if (isb)
           {
               remove[i] = 1;
               isb--;
        }
       }
       if (s[i] - 'A' >= 0 && s[i] - 'A' <= 25)
       {
           if (icb)
           {
               remove[i] = 1;
               icb--;
           }
       }
    }
    forn(i,n){
        if(!remove[i]){
            cout << s[i];
        }
    }
    cout << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}