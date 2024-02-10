#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    string s;
    cin >> s;
    ll n = s.size();
    for (ll i = 0; i < n - 1;i++){
        if(s.substr(0,i+1)==s.substr(i+1)){
            cout << "YES"
                 << "\n";
            return;
        }
    }
    cout << "NO"
         << "\n";
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