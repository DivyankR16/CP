#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll temp = max(a, b);
    a = min(a, b);
    b = temp;
    ll cnt = 0;
    for (ll i = a; i <= b;i++){
        if(i==c || i==d){
            cnt++;
        }
    }
    if(cnt==1){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
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