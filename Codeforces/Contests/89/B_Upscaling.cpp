#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    char a[n][n];
    forn(i,n){
        forn(j,n){
            a[i][j] = '0';
        }
    }
    forn(i,n){
        forn(j,n){
            if(i==0 && j==0){
                a[i][j] = '#';
            }
               if(i+1<n){
                   a[i + 1][j] = (a[i][j] == '#' ? '.' : '#');
               }
               if (j + 1 < n)
               {
                   a[i][j+1] = (a[i][j] == '#' ? '.' : '#');
               }
        }
    }
    // forn(i,n){
    //     forn(j,n){
    //         cout << a[i][j];
    //     }
    //     cout << "\n";
    // }
    char ans[2 * n][2 * n];
    forn(i,n){
        forn(j,n){
            ans[2 * i][2 * j] = a[i][j];
            ans[2 * i][2 * j+1] = a[i][j];
            ans[2 * i+1][2 * j] = a[i][j];
            ans[2 * i+1][2 * j+1] = a[i][j];
        }
        
    }
    forn(i,2*n){
        forn(j,2*n){
            cout << ans[i][j];
        }
        cout << "\n";
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