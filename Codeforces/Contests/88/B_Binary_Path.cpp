#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    char a[2][n];
    forn(i,2){
        forn(j,n){
            cin >> a[i][j];
        }
    }
    ll mk = n-1;
    for (ll i = 0; i < n - 1;i++){
        if(a[0][i+1]=='1' && a[1][i]=='0'){
            mk = i;
            break;
        }
    }
        string ans = "";
        for (ll i = 0; i <= mk;i++){
            ans += a[0][i];
        }
        for (ll i = mk; i < n;i++){
            ans += a[1][i];
        }
        ll cnt = 1;
        ll pos = n - 1;
        while(pos>0){
            if(pos>mk){
                pos--;
                continue;
            }
            if ((a[0][pos] == '0' && a[1][pos - 1] == '0') || (a[0][pos] == '1' && a[1][pos - 1] == '1'))
            {
                cnt++;
            }
            else{
                break;
            }
            pos--;
        }
        // if(a[0][mk+1]=='1' && a[1][mk]=='0'){
        //     cnt--;
        // }
        cout << ans << "\n";
        cout << cnt << "\n";
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