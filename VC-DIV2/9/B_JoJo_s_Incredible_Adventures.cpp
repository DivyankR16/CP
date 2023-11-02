#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll maxconsecOne(string &s,ll n){
    ll i = 0;
    ll ans = 0;
    while(i<n){
        ll cnt = 0;
        while(i<n && s[i]=='1'){
            i++;
            cnt++;
        }
        if(i==n){
            if(cnt<n){
                ll k = 0;
                while (s[k]=='1')
                {
                    k++;
                    cnt++;
            }
            }
        }
        ans = max(ans, cnt);
        if(cnt==0)
            i++;
    }
    return ans;
}
void solve(){
    string s;
    cin >> s;
    ll n = s.size();
    ll maxcOnes = maxconsecOne(s, n);
    if(maxcOnes==n){
        cout << n * n << "\n";
        return;
    }
    ll left = 1;
    ll right = maxcOnes;
    ll ans = 0;
    while(left<=right){
        ans = max(ans, left * right);
        left++;
        right--;
    }
    cout << ans << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}