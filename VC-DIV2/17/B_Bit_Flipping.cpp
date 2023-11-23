#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
#define put push_back
void solve(){
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<ll> moves(n, 0);
    ll total = k;
    forn(i,n){
        if(k%2==s[i]-'0' && total){
            moves[i] = 1;
            total--;
        }
    }
    moves[n - 1] += total;
    forn(i,n){
        if((k-moves[i])%2==1){
            if(s[i]=='0'){
                s[i] = '1';
            }
            else{
                s[i] = '0';
            }
        }
    }
    cout << s << "\n";
    for(auto i:moves){
        cout << i << " ";
    }
    cout << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}