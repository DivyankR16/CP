#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    ll p = 0;
    ll n = 0;
    ll ans = 0;
    if(a1>b1){
        p+=1;
    }
    else if(a1<b1){
        n += 1;
    }
    if(a2>b2){
        p += 1;
    }
    else if(a2<b2){
        n += 1;
    }
    if(p>n){
        ans += 2;
    }
    p = 0;
    n = 0;
    if(a1>b2){
        p += 1;
    }
    else if(a1<b2){
        n += 1;
    }
    if(a2>b1){
        p += 1;
    }
    else if(a2<b1){
        n += 1;
    }
    if(p>n){
        ans += 2;
    }
    cout << ans << "\n";
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