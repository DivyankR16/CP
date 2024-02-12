#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, x;
    cin >> n >> x;
    set<ll> s;
    // Case for x!=1 && x!=k
    ll val = n - x;
    set<ll> temp1;
    for (ll i = 1; i * i <=val;i++){
       if(val%i==0){
          if(i%2==0){
           temp1.insert(i);
          }
       if((val/i)%2==0){
           temp1.insert(val / i);
       }
       }
    }
    for(auto i:temp1){
        if((1+i/2)!=1 && (1+i/2)!=x){
            s.insert(1 + i / 2);
        }
    }
    // Case for x==1 || x==k
    set<ll> temp2;
    ll val2 = n + x - 2;
    for (ll i = 1; i * i <= val2;i++){
        if (val2 % i == 0)
        {   if(i%2==0){
            temp2.insert(i);
        }
        if ((val2 / i)%2 == 0)
        {
            temp2.insert(val2 / i);
        }
        }
    }
    for (auto i : temp2)
    {
        // if ((1 + i / 2) == 1 || (1 + i / 2) == x){
            s.insert(1 + i / 2);
        // }
    }
    ll ans = 0;
    for(auto i:s){
        if(i>=x){
            ans++;
        }
    }
    cout << ans << "\n";
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