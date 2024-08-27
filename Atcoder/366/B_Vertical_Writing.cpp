#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    vector<string> a;
    ll mx = 0;
    forn(i,n){
        string s;
        cin >> s;
        a.push_back(s);
        mx = max(mx, (ll)s.size());
    }
    vector<string> ans;
    for (ll i = n - 1; i >= 0;i--){
        if(i==n-1){
        for (ll j = 0; j < a[i].size();j++){
            string need = "";
            need += a[i][j];
            ans.push_back(need);
        }
        if (i != 0)
        {
            for (ll j = (ll)a[i].size(); j < mx; j++)
            {
                string need = "";
                need += '*';
                ans.push_back(need);
            }
        }
        }
        else{
            for (ll j = 0; j < a[i].size(); j++)
            {
                ans[j].push_back(a[i][j]);
            }
            if(i!=0){
            for (ll j = (ll)a[i].size(); j < mx; j++)
            {
                ans[j].push_back('*');
            }
            }
        }
    }
    for(auto &s:ans){
        while(s.size() && s.back()=='*'){
            s.pop_back();
        }
    }
    for(auto i:ans){
        cout << i << "\n";
    }
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}