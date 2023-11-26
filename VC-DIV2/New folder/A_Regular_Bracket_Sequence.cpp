#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    string s;
    cin >> s;
    ll n = s.size();
    if(n%2==0 && s[0]!=')' && s[n-1]!='('){
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