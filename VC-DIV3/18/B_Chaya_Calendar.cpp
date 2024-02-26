#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll ypass = 0;
    for (ll i = 0; i < n;i++){
        if(!i){
            ypass = a[i];
        }
        else{
            if(ypass>=a[i]){
                ll need = ypass / a[i] + 1;
                ypass = a[i]*need;
            }
            else{
                ypass = a[i];
            }
        }
    }
    cout << ypass << "\n";
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