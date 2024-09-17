#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m;
    cin >> n >> m;
    ll x, y;
    cin >> x >> y;
    x--;
    y--;
    // char a[n][m];
    vector<vector<char>> a(n, vector<char>(m, '.'));
    forn(i,n){
        forn(j,m){
            cin >> a[i][j];
        }
    }
    string s;
    cin>>s;
    auto modify=[&x,&y,n,m,a](char c){
        if(c=='L'){
            if(y-1>=0 && a[x][y-1]=='.'){
                y--;
            }
        }
        if(c=='R'){
            if(y+1<m && a[x][y+1]=='.'){
                y++;
            }
        }
        if(c=='U'){
            if(x-1>=0 && a[x-1][y]=='.'){
                x--;
            }
        }
        if(c=='D'){
            if(x+1<n && a[x+1][y]=='.'){
                x++;
            }
        }
    };
    for(auto c:s){
        modify(c);
    }
    cout << x + 1 << " " << y + 1 << "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}