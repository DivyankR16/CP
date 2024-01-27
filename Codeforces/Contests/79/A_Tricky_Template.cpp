#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin >> n;
string a, b, c;
cin >> a >> b >> c;
forn(i,n){
    if(a[i]!=b[i] && (c[i]==a[i] || c[i]==b[i])){
        cout << "YES"
             << "\n";
        return;
    }
    // if(a[i]==b[i] && c[i]!=a[i]){
    //     cout << "YES"
    //          << "\n";
    //     return;
    // }
}
cout << "NO"
     << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}