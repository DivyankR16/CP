#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    if(n%2==0){
        cout << -1 << "\n";
        return;
    }
    ll l = 1;
    ll r = n;
    for (ll i = 0; i < n;i++){
        if(i%2==0){
            cout << l++<<" ";
        }
        else{
            cout << r--<<" ";
        }
    }
    cout << "\n";
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