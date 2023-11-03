#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll k;
    cin >> k;
    string s;
    cin >> s;
    string temp = "FBFFBFFB";
    for (ll i = 0; i < 10;i++){
        temp.append(temp);
    }
    if (temp.find(s) != string::npos){
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