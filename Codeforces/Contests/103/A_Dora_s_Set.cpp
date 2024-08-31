#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll l,r;
    cin>>l>>r;
    ll n = r - l + 1;
    if(n%2==1){
        if(l%2==1){
            cout << ((r - l + 1) / 2 + 1) / 2 << "\n";
        }
        else{
            cout << (r - l + 1) / 4 << "\n";
        }
    }
    else{
        cout << (r - l + 1) / 4 << "\n";
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