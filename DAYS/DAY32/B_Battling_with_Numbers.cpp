#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
const ll mod = 998244353;
void solve(){
    // LCM(a, b) = X;
    // GCD(a, b) = Y;
    map<ll, ll> mplcm;
    map<ll, ll> mpgcd;
    ll N;
    cin >> N;
    ll A[N], B[N];
    forn(i,N){
        cin >> A[i];
    }
    forn(i, N)
    {
        cin >> B[i];
    }
    ll M;
    cin >> M;
    ll C[M], D[M];
    forn(i, M)
    {
        cin >> C[i];
    }
    forn(i, M)
    {
        cin >> D[i];
    }
    forn(i,N){
        mplcm[A[i]] = B[i];
    }
    forn(i,M){
        mpgcd[C[i]] = D[i];
    }
    ll ans = 1;
    for(auto i:mpgcd){
        if(mplcm.find(i.first)!=mplcm.end()){
            if(i.second>mplcm[i.first]){
                cout << 0 << "\n";
                return;
            }
            else{
                if(i.second!=mplcm[i.first]){
                    ans = (ans*2)%mod;
                }
            }
        }
        else{
            cout << 0 << "\n";
            return;
        }
    }
    for(auto i:mplcm){
        if(mpgcd.find(i.first)==mpgcd.end()){
            ans = (ans*2)%mod;
        }
    }
    cout << ans << "\n";
}
int main(){
solve();
return 0;
}