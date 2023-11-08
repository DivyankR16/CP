#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    for (ll y = 1; y <= 20; y++)
    {
        for (ll x = 1; x <= 20; x++)
        {
            vector<ll> sets(2, 0), plays(2, 0);
            ll i;
            for (i = 0; i < n; i++)
            {
                if (s[i] == 'A')
                    plays[0]++;
                else
                    plays[1]++;
                if (plays[0] == x)
                    sets[0]++;
                if (plays[1] == x)
                    sets[1]++;
                if (plays[0] == x || plays[1] == x)
                    plays = {0, 0};
                if (sets[0] == y || sets[1] == y)
                    break;
            }
            if (i == n - 1 && (sets[0] == y || sets[1] == y))
            {
                cout << (sets[0] == y ? 'A' : 'B') << endl;
                return;
            }
        }
    }
    cout << '?' << endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}