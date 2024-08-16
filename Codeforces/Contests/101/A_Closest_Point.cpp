#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    forn(i,n)cin>>a[i];
    if(n>2){
        cout << "NO" << "\n";
    }
    else{
       if(a[1]-a[0]>1){
           cout << "YES" << "\n";
       }
       else{
           cout << "NO" << "\n";
       }
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