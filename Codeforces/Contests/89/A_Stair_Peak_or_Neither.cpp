#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll a, b, c;
    cin >> a >> b >> c;
    if(a<b && b<c){
        cout << "STAIR"
             << "\n";
    }
    else if(b>a && b>c){
        cout << "PEAK"
             << "\n";
    }
    else{
        cout << "NONE"
             << "\n";
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