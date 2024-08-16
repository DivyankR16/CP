#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll m;
    cin >> m;
    forn(i,m){
        string s;
        cin >> s;
        if(s.size()==n){
            bool ans = true;
            set<ll> st;
            map<char, ll> mp;
            forn(i,n){
                if(mp.find(s[i])!=mp.end()){
                    if(mp[s[i]]!=a[i]){
                        ans = false;
                        break;
                    }
                }
                else if(st.find(a[i])!=st.end()){
                    ans = false;
                    break;
                }
                else{
                    mp[s[i]] = a[i];
                    st.insert(a[i]);
                }
            }
            if(ans){
                cout << "YES" << "\n";
            }
            else{
                cout << "NO" << "\n";
            }
        }
        else{
            cout << "NO" << "\n";
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