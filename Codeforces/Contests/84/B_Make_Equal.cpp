#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin >> n;
ll a[n];
forn(i, n) cin >> a[i];
ll s = 0;
forn(i,n){
    s += a[i];
}
ll need = s / n;
ll check = 0;
ll ex = 0;
// ll nk = 0;
forn(i,n){
    if(need>a[i]){
        if(ex<need-a[i]){
            cout << "NO"
                 << "\n";
            return;
        }
        else{
            ex -= need - a[i];
        }
    }
    else{
        ex += a[i] - need;
    }
}
cout << "YES"
     << "\n";
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