#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
const ll N = 1e5 + 1;
bool need[N];
bool check(ll n){
    while(n){
        ll digit = n % 10;
        if(digit!=0 && digit!=1){
            return false;
        }
        n /= 10;
    }
    return true;
}
void solve(){
    ll n;
    cin >> n;
    if(need[n]){
        cout << "YES"
             << "\n";

        return;
    }
    cout << "NO"
         << "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
ll t;
cin>>t;
for (ll i = 1; i < N;i++){
    for (ll j = 1; j * j <= i;j++){
        if(i%j==0){
        ll f1 = j;
        ll f2 = i / j;
        if(check(f1) && check(f2)){
            need[i] = 1;
            break;
        }
        if (check(f1) && need[f2])
        {
            need[i]=1;
            break;
        }
        if (check(f2) && need[f1])
        {
            need[i]=1;
            break;
        }
        if (need[f2] && need[f1])
        {
            need[i]=1;
            break;
        }
        }
    }
}
    while (t--)
    {
        solve();
    }
return 0;
}