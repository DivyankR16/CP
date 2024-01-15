#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m, k;
    cin >> n >> m >> k;
    char a[n][m];
    forn(i,n){
        forn(j,m){
            cin >> a[i][j];
        }
    }
    ll check[n][m];
    forn(i,n){
        forn(j,m){
            if(a[i][j]=='.')check[i][j] = 0;
            else{
                check[i][j] = 1;
            }
        }
    }
    for (ll i = n - 1; i >= 0;i--){
        for (ll j = 0; j < m;j++){
            if(check[i][j]!=0){
                ll d = 0;
                while(i-d>=0 && j-d>=0 && j+d<m){
                    if(check[i-d][j-d]==0 || check[i-d][j+d]==0){
                        break;
                    }
                    d++;
                }
                d--;
                if(d>=k){
                    ll move = 0;
                    while (move<=d)
                    {
                        check[i - move][j - move] = 2;
                        check[i - move][j + move] = 2;
                        move++;
                    }
                }
            }
        }
    }
    forn(i,n){
        forn(j,m){
            if(check[i][j]==1){
                cout << "NO"
                     << "\n";
                return;
            }
        }
    }
    cout << "YES"
         << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}