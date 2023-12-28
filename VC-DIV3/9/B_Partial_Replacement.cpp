#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll cnt = 0;
    ll st = -1;
    ll ed = -1;
    forn(i,n){
        if(s[i]=='*'){
            s[i] = 'x';
            cnt++;
            st = i;
            break;
        }
    }
    for (ll i = n - 1; i >= 0;i--){
        if(s[i]=='*'){
            s[i] = 'x';
            cnt++;
            ed = i;
            break;
        }
    }
    ll i = st;
    while(i<=ed){
        ll idx = -1;
        ll endidx = i + k;
        bool ised = false;
        while(i<=endidx && i<=ed){
            if(s[i]=='*'){
                idx = i;
            }
            else if(i==ed){
                ised = true;
            }
            i++;
        }
        s[idx] = 'x';
        if(!ised){
        cnt++;
        }
        i = idx;
        if (endidx >= ed)
        {
            break;
        }
    }
    cout << cnt << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}