#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll a, b;
    cin >> a >> b;
    if((a+b)%2==0){
        cout << "Bob"
             << "\n";
    }
    else{
        cout << "Alice"
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