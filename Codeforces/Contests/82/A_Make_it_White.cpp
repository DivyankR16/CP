#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll fstb = -1;
    ll endb = -1;
    forn(i,n){
       if(s[i]=='B'){
           fstb = i;
           break;
       }
    }
    for (ll i = n - 1; i >= 0;i--){
        if(s[i]=='B'){
            endb = i;
            break;
        }
    }
    if(fstb==-1){
        cout << 0 << "\n";
    }
    else{
        cout << endb - fstb + 1 << "\n";
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