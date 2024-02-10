#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll x;
    cin >> x;
    bool used[11];
    for (ll i = 0; i <= 10;i++){
        used[i] = 0;
    }
    vector<ll> ans;
    while (x)
    {
        bool ck = false;
        for (ll i = 1; i <= 9; i++)
        {
            if (x == i && !used[i])
            {
                x -= i;
                ans.push_back(i);
                used[i] = 1;
                ck = true;
                break;
            }
        }
        bool done = false;
        if(!ck){
            for (ll i = 9; i >= 1;i--){
                if(!used[i]){
                    x -= i;
                    used[i] = 1;
                    ans.push_back(i);
                    done = true;
                    break;
                }
            }
        }
        if(!ck && !done){
            cout << -1 << "\n";
            return;
        }
        }
        reverse(ans.begin(), ans.end());
        for(auto i:ans){
            cout << i;
        }
        cout << "\n";
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