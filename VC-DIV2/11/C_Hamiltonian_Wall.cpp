#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    vector<string> s(2);
    cin >> s[0] >> s[1];
    auto check = [&](ll i, ll j)
    {
        if (s[i][j] != 'B')
            return 0;
        int ok = 1;
        vector<vector<ll>> used(2, vector<ll>(n));
        used[i][j] = 1;
        while (j < n - 1)
        {
            if (!used[i ^ 1][j] && s[i ^ 1][j] == 'B')
            {
                i ^= 1;
                used[i][j] = 1;
            }
            else
            {
                if (s[i][j + 1] != 'B')
                {
                    ok = 0;
                    break;
                }
                else
                {
                    j++;
                    used[i][j] = 1;
                }
            }
        }
        return ok;
    };
    ll ok = check(0, 0) | check(1, 0);
    if (ok)
        cout << "Yes\n";
    else
        cout << "No\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}