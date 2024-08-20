#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
pair<ll,ll>f(vector<ll>a,ll x,ll y){
    pair<ll, ll> ans;
    ans = {-1, INT_MAX};
    ll cur = INT_MAX;
    if (upper_bound(a.begin(), a.end(), x) != a.end())
    {
        auto it = upper_bound(a.begin(), a.end(), x);
        ll val = *it;
        if (val < y)
        {
            ans.first = y - x;
            return ans;
        }
    }
    if (lower_bound(a.begin(), a.end(), x) != a.end())
    {
        ll idx = lower_bound(a.begin(), a.end(), x) - a.begin();
        if (idx > 0)
        {
            idx--;
            cur = min(cur, 2 * (x - a[idx]) + y - x);
        }
    }
    if (upper_bound(a.begin(), a.end(), y) != a.end())
    {
        auto it = upper_bound(a.begin(), a.end(), y);
        ll val = *it;
        cur = min(cur, y - x + 2 * (val - y));
    }
    ans.second = cur;
    return ans;
}
void solve(){
    // b g r y
    // bg br by gr gy ry  
    ll n,q;
    cin >> n >> q;
    vector<string> a;
    forn(i,n){
        string s;
        cin >> s;
        a.push_back(s);
    }
    vector<ll> sbg;
    vector<ll> sbr;
    vector<ll> sby;
    vector<ll> sgr;
    vector<ll> sgy;
    vector<ll> sry;
    forn(i,n){
        if(a[i]=="BG"){
            sbg.push_back(i);
        }
        if (a[i] == "BR")
        {
            sbr.push_back(i);
        }
        if (a[i] == "BY")
        {
            sby.push_back(i);
        }
        if (a[i] == "GR")
        {
            sgr.push_back(i);
        }
        if (a[i] == "GY")
        {
            sgy.push_back(i);
        }
        if (a[i] == "RY")
        {
            sry.push_back(i);
        }
    }
    sort(sbg.begin(), sbg.end());
    sort(sbr.begin(), sbr.end());
    sort(sby.begin(), sby.end());
    sort(sgr.begin(), sgr.end());
    sort(sgy.begin(), sgy.end());
    sort(sry.begin(), sry.end());
    while(q--){
        ll x, y;
        cin >> x >> y;
        x--;
        y--;
        ll tmp = min(x, y);
        y = max(x, y);
        x = tmp;
        char c1 = a[x][0];
        char c2 = a[x][1];
        if(a[y][0]==c1 || a[y][1]==c1 || a[y][0]==c2 || a[y][1]==c2){
            cout << y - x << "\n";
            continue;
        }
        ll ans = INT_MAX;
        if(a[x]!="BG" && a[y]!="BG"){
            pair<ll, ll> need = f(sbg, x, y);
            if(need.first!=-1){
                cout << need.first << "\n";
                continue;
            }
            else{
                ans = min(ans, need.second);
            }
        }
        if (a[x] != "BR" && a[y] != "BR")
        {
            pair<ll, ll> need = f(sbr, x, y);
            if (need.first != -1)
            {
                cout << need.first << "\n";
                continue;
            }
            else
            {
                ans = min(ans, need.second);
            }
        }
        if (a[x] != "BY" && a[y] != "BY")
        {
            pair<ll, ll> need = f(sby, x, y);
            if (need.first != -1)
            {
                cout << need.first << "\n";
                continue;
            }
            else
            {
                ans = min(ans, need.second);
            }
        }
        if (a[x] != "GR" && a[y] != "GR")
        {
            pair<ll, ll> need = f(sgr, x, y);
            if (need.first != -1)
            {
                cout << need.first << "\n";
                continue;
            }
            else
            {
                ans = min(ans, need.second);
            }
        }
        if (a[x] != "GY" && a[y] != "GY")
        {
            pair<ll, ll> need = f(sgy, x, y);
            if (need.first != -1)
            {
                cout << need.first << "\n";
                continue;
            }
            else
            {
                ans = min(ans, need.second);
            }
        }
        if (a[x] != "RY" && a[y] != "RY")
        {
            pair<ll, ll> need = f(sry, x, y);
            if (need.first != -1)
            {
                cout << need.first << "\n";
                continue;
            }
            else
            {
                ans = min(ans, need.second);
            }
        }
        if(ans==INT_MAX){
            cout << -1 << "\n";
        }
        else{
            cout << ans << "\n";
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