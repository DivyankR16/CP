#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<vector<char>> a;
vector<vector<ll>> memo;
ll recur(ll i,ll m,ll n,ll npos){
    if(i==n){
        return 0;
    }
    if(memo[i][npos]!=INT_MIN){
        return memo[i][npos];
    }
    ll ans1 = 0;
    string need = "narek";
    ll k1 = npos;
    ll neg1 = 0;
    for (ll j = 0; j < m;j++){
        if (a[i][j] == 'n' || a[i][j] == 'a' || a[i][j] == 'r' || a[i][j] == 'e' || a[i][j] == 'k'){
            if(a[i][j]!=need[k1]){
                neg1++;
            }
        }
            if (a[i][j] == need[k1])
            {
                k1++;
            }
        if(k1==5){
            k1 = 0;
            ans1++;
        }
    }
    return memo[i][npos]=max(recur(i + 1, m, n,npos), 5*ans1 - neg1 + recur(i + 1, m, n,k1));
}
void solve(){
    ll n, m;
    cin >> n >> m;
    a.clear();
    memo.clear();
    memo = vector<vector<ll>>(n, vector<ll>(5,INT_MIN));
    forn(i,n){
        vector<char> cur;
        forn(j,m){
            char c;
            cin >> c;
            cur.push_back(c);
        }
        a.push_back(cur);
    }
    cout << recur(0, m, n, 0)<<"\n";
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