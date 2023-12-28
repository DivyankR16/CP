#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll a, b, c;
    cin >> a >> b >> c;
    if(a==b){
        cout << c << "\n";
    }
    else if(b==c){
        cout << a << "\n";
    }
    else{
        cout << b << "\n";
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