#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    auto ask = [&](string &t) -> ll
    {
        cout << "? " << t <<"\n";
        cout.flush();
        ll res;
        cin >> res;
        return res;
    };
    vector<string> vs;
        string p = "";
        for (int i = 0; i < (1 << 6); ++i)
        {
            string qs = "";
            for (int j = 5; j >= 0; --j)
            {
                qs += (i & (1 << j)) ? '1' : '0';
            }

            if (ask(qs) == 1)
            {
                vs.push_back(qs);
            }
        }
        p = vs[0];
        for (int i = 1; i < vs.size(); ++i)
        {
            string cs = vs[i];
            p += cs[5];
        }
        cout << "! " << p.substr(0, n) << "\n";
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