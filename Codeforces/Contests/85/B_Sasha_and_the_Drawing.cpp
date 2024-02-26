#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    // if(n==2){
    //     if(n%2==1){
    //         cout << 1 << "\n";
    //     }
    //     else{
    //     cout << n << "\n";
    //     }
    //     return;
    // }
    if(k==4*n-2){
        cout << n + n << "\n";
        return;
    }
    if(k%2==0){
        cout << k / 2 << "\n";
    }
    else{
        cout << k / 2 + 1 << "\n";
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