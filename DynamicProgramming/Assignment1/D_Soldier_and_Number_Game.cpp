#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
const ll N = 5000000;
bool isPrime[N + 1];
ll maxprimefactor[N+1];
ll primefactors[N+1];
void sieve(){
    for (ll i = 2; i <= N;i++){
        isPrime[i] = 1;
    }
    for (ll i = 2; i<= N;i++){
        if(isPrime[i]){
        maxprimefactor[i] = i;
        for (ll j = i+i; j <= N;j+=i){
            maxprimefactor[j] = i;
            isPrime[j] = 0;
        }
        }
    }
    primefactors[1] = 0;
    for (ll i = 2; i <= N;i++){
        primefactors[i] = primefactors[i / maxprimefactor[i]]+1;
    }
    for (ll i=2; i <= N;i++){
        primefactors[i] += primefactors[i - 1];
    }
}
void solve(){
    ll a, b;
    cin >> a >> b;
    cout << primefactors[a] - primefactors[b] << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
}
return 0;
}