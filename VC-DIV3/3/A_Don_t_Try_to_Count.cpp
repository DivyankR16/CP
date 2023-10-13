#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    ll cnt=0;
    while(cnt<=4){
        ll i = 0;
        ll j = s.size() - 1;
        if(x.size()>=s.size()){
        while (j < x.size())
        {
            if (x.substr(i, j - i + 1) == s)
            {
                cout << cnt << "\n";
                return;
            }
            i++;
            j++;
        }
        }
        x.append(x);
        cnt++;
    }
    cout << -1 << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
