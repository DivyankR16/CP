#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll b, c, d;
    cin >> b >> c >> d;
    // ll carry = 0;
    ll a = 0;
    for (ll i = 0; i <= 60;i++){
        ll cb = (b & (1 << i));
        ll cc = (c & (1 << i));
        ll cd = (d & (1 << i));
        if(cb==cd){
            a += 0;
        }
        else if(cc+cd==1){
            a += (1 << i);
        }
        else{
            cout << -1 << "\n";
            return;
        }
    }
    cout << a << "\n";
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