#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    for (ll k = n; k >= 1;k--){
    vector<ll>a(n,0);
    vector<ll>fu(n+1,0);
    forn(i,n){
        a[i] = s[i] - '0';
    }
    ll inv = 0;
     forn(i,n){
         inv-= fu[i];
         if(inv%2==1){
            if(a[i]==0){
                a[i] = 1;
            }
            else{
                a[i] = 0;
            }
         }
         if(a[i]==0){
             if(i+k<=n){
             inv++;
             fu[i + k]++;
             a[i] = 1;
             }
             else
             {
                 break;
             }
         }
     }
     ll mn = INT_MAX;
     forn(i,n){
         mn = min(a[i], mn);
     }
     if(mn==1){
         cout << k << "\n";
         return;
     }
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