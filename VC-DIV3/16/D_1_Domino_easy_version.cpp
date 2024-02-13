#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m, k;
    cin >> n >> m >> k;
    ll mn = (n % 2 == 1 ? m / 2 : 0);
    ll mx = n * m / 2 - (m % 2 == 1 ? n / 2 : 0);
    if(k>=mn && k<=mx && (k-mn)%2==0){
        cout << "YES"
             << "\n";
    }
    else{
        cout << "NO"
             << "\n";
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