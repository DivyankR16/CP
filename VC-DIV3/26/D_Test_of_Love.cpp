#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    s = 'L' + s + 'L';
    ll i = 0;
    ll cost = 0;
    while(i<n+1){
        if(s[i]=='C'){
            break;
        }
        if(s[i]=='W'){
            cost++;
            i++;
            continue;
        }
        assert(s[i] == 'L');
        bool ck = false;
        for (ll j = min(n + 1, i+m); j > i;j--){
            if(s[j]=='L'){
                i = j;
                ck = true;
                break;
            }
        }
        if(ck){
            continue;
        }
        for (ll j = min(n + 1, i+m); j > i; j--)
        {
            if (s[j] == 'W')
            {
                i = j;
                ck = true;
                break;
            }
        }
        if(!ck)break;
    }
    if(i==n+1 && cost<=k){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
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