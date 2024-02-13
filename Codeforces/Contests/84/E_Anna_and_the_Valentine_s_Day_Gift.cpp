#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n];
    forn(i, n) cin >> a[i];
    vector<ll> v;
    vector<ll> v1;
    forn(i,n){
        v.push_back(a[i]);
        v1.push_back(a[i]);
    }
    sort(v.begin(), v.end(), [&](ll a, ll b) {
       ll a0=0;
       ll b0=0;
       while(a%10==0){
           a0++;
           a /= 10;
       }
       while(b%10==0){
           b0++;
           b /= 10;
       }
       return a0 > b0;
    });
    bool ck = true;
    forn(i,v.size()){
        if(ck){
            while(v[i]%10==0){
                v[i] /= 10;
            }
            ck =! ck;
        }
        else{
            ck =! ck;
        }
    }
    // for(auto i:v){
    //     cout<< i << " ";
    // }
    // cout << "\n";
    ll dgt = 0;
    for (ll i = 0; i < v.size();i++){
        while(v[i]){
            dgt++;
            v[i] /= 10;
        }
    }
    // cout << dgt << "\n";
    if(dgt>m){
        cout << "Sasha"<<"\n";
    }
    else{
        cout << "Anna"
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