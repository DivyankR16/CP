#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m, x;
    cin >> n >> m >> x;
    ll col = (x % n == 0 ? x / n : x / n + 1);
    ll row;
    if(x%n==0){
        row = n;
    }
    else{
        row = x % n;
    }
    cout << m * (row - 1) + col << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}