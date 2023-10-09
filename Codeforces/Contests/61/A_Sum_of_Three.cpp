#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    for (ll i = 2; i < 100000;i++){
       if((n-1-i)%3!=0){
        if(i%3){
            if(n-1-i!=1){
                if(n-i-1!=i){
                    if(n-1-i>0){
                        cout << "YES"
                             << "\n";
                        cout << 1 << " " << i << " " << (n - 1 - i) << "\n";
                        return;
                    }
                }
            }
        }
       }
    }
    cout << "NO"
         << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}