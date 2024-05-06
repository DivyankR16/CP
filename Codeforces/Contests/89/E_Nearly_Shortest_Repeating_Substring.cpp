#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> f;
    for (ll i = 1; i * i <= n;i++){
        if(n%i==0){
            f.push_back(i);
            if(i!=(n/i)){
                f.push_back(n / i);
            }
        }
    }
    sort(f.begin(), f.end());
    ll len = f.size();
    for (ll i =0; i <len;i++){
        ll sz = f[i];
        bool isfst = true;
        string ck = "";
        ll mv = 0;
        ll cnt = 0;
        map<string,ll> sst;
        while(mv<n){
            ll ptr = 0;
            string hhpp = "";
            while(ptr<sz){
                hhpp += s[mv + ptr];
                ptr++;
                }
                sst[hhpp]++;
                mv += ptr;
            }
        if(sst.size()<=2){
            ll uf = 0;
            for(auto i:sst){
               if(i.second>=2){
                   uf++;
               }
            }
            if(uf<=1){
                if(sst.size()==1){
                    cout << sz << "\n";
                    return;
                }
                string s1 = "";
                string s2 = "";
                bool ck = true;
                for (auto i : sst)
                {
                     if(ck){
                         s1 = i.first;
                         ck = false;
                     }
                     else{
                         s2 = i.first;
                     }
                }
                ll vcnt = 0;
                for (ll i = 0; i < s1.size();i++){
                    if(s1[i]!=s2[i]){
                        vcnt++;
                    }
                }
                if(vcnt<=1){
                    cout << sz << "\n";
                    return;
                }
            }
        }
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