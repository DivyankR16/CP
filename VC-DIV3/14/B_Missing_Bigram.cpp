#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll sz = n - 2;
    vector<string> a;
    forn(i,sz){
        string s;
        cin >> s;
        a.push_back(s);
    }
    if(n==3){
        cout << a[0][0] << a[0][1] << a[0][1] << "\n";
        return;
    }
    string ans = "";
    ans += a[0][0];
    bool over = false;
    for (ll i = 0; i < sz - 2;i++){
        if(a[i][1]!=a[i+1][0]){
            over = true;
            if(a[i][1]=='b'){
                ans += 'b';
                ans += 'a';
            }
            else{
                ans += 'a';
                ans += 'b';
            }
        }
        else{
            ans += a[i][1];
        }
    }
    if(!over){
        if (a[sz-2][1] != a[sz-1][0])
        {
            if (a[sz-2][1] == 'b')
            {
                ans += 'b';
                ans += 'a';
            }
            else
            {
                ans += 'a';
                ans += 'b';
            }
        }
        else{
            ans += a[sz - 2][1];
            ans += a[sz - 2][1];
        }
    }
    else{
        ans += a[sz - 2][1];
    }
    ans += a[sz - 1][1];
    cout << ans << "\n";
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