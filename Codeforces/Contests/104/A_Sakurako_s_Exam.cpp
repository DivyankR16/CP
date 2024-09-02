#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll a, b;
    cin>>a>>b;
    if(a%2==0 && b%2==0){
        cout << "YES" << "\n";
        return;
    }
    if(a%2==1 && b%2==1){
        cout << "NO" << "\n";
        return;
    }
    if(b%2==0 && a%2==1){
        cout << "NO" << "\n";
        return;
    }
    if(b%2==1 && a%2==0 && a!=0){
        cout << "YES" << "\n";
        return;
    }
    cout << "NO" << "\n";
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