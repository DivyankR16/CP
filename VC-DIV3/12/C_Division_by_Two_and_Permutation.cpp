#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    forn(i,n){
        while(a[i]>n){
            a[i] /= 2;
        }
    }
    multiset<ll> s;
    forn(i,n){
        s.insert(a[i]);
    }
    ll need = n;
    while(need>0){
        if(s.find(need)!=s.end()){
            auto it = s.find(need);
            s.erase(it);
        }
        else{
            bool ck = false;
            for(auto i:s){
                ll val = i;
                while(val>need){
                    val /= 2;
                }
                if(val==need){
                    auto it = s.find(i);
                    s.erase(it);
                    ck = true;
                    break;
                }
            }
            if(!ck){
                cout << "NO"
                     << "\n";
                return;
            }
        }
        need--;
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