#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m;
    cin >> n >> m;
    bool a[n+1];
    for (ll i = 0; i <= n;i++){
        a[i] = 0;
    }
    while(m--){
        ll f;
        cin >> f;
        char g;
        cin >> g;
        if(g=='M'){
            if(!a[f]){
                cout << "Yes" << "\n";
                a[f] = 1;
            }
            else{
                cout << "No" << "\n";
            }
        }
        else{
            cout << "No" << "\n";
        }
    }
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}