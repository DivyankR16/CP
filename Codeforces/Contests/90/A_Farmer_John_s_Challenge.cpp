#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n,k;
    cin >> n>>k;
    if(k==1 || k==n){
        if(k==1){
            forn(i,n){
                cout << i + 1 << " ";
            }
            cout << "\n";
        }
        else{
            forn(i,n){
                cout << 1 << " ";
            }
            cout << "\n";
        }
    }
    else{
        cout << -1 << "\n";
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