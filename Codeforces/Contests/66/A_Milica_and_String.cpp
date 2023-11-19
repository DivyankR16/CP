#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll noB = 0;
    forn(i,n){
        if(s[i]=='B')
            noB++;
    }
    if(noB==k){
        cout << 0 << "\n";
        return;
    }
    ll cntA = 0;
    ll cntB = 0;
    ll aB[n];
    forn(i,n){
        aB[i] = 0;
    }
    forn(i,n){
        if(s[i]=='B'){
            aB[i] += 1 + (i ? aB[i - 1] : 0);
        }
    }
    if(noB<k){
    forn(i,n){
      if(s[i]=='A')
          cntA++;
      if(noB+cntA==k){
          cout << 1 << "\n";
          cout << i + 1 << ' ' << 'B' << "\n";
          break;
      }
    }
    }
    else{
        forn(i,n){
            if(s[i]=='B')
                noB--;
            if(noB==k){
                cout << 1 << "\n";
                cout << i + 1 << ' ' << 'A' << "\n";
                break;
            }
        }

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