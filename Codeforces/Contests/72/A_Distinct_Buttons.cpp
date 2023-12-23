#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    bool isLeft = false;
    bool isRight = false;
    bool isUp = false;
    bool isDown = false;
    forn(i,n){
        ll x, y;
        cin >> x >> y;
        if(x<0){
            isLeft = true;
        }
        if(x>0){
            isRight = true;
        }
        if(y>0){
            isUp = true;
        }
        if(y<0){
            isDown = true;
        }
    }
    if(isLeft && isRight && isUp && isDown){
        cout << "NO"
             << "\n";
    }
    else{
        cout << "YES"
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