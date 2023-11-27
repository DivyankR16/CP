#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m;
    cin >> n >> m;
    char grid[n][m];
    forn(i,n){
        forn(j,m){
            cin >> grid[i][j];
        }
    }
    vector<ll> check(m,0);
    for (ll i = 1; i < n;i++){
        for (ll j = 1; j < m;j++){
            if(grid[i-1][j]=='X' && grid[i][j-1]=='X'){
                check[j]++;
            }
        }
    }
    for (ll i = 1; i<m;i++){
        check[i] += check[i - 1];
    }
        // bool excitable[n][m];
        // forn(i,n){
        //     forn(j,m){
        //         excitable[i][j] = 0;
        //     }
        // }
        // for (ll i = 0; i < m;i++){
        //     for (ll j = 0; j < n;j++){
        //         if(i==0){
        //             if(grid[j][i]=='.'){
        //                 excitable[j][i] = 1;
        //             }
        //         }
        //         else if(j==0){
        //             if (grid[j][i] == '.')
        //             {
        //                 excitable[j][i] = 1;
        //             }
        //         }
        //         else{
        //             if(grid[j][i]=='.'){
        //                 if(!excitable[j-1][i] && !excitable[j][i-1]){
        //                     check.push_back(i);
        //                     break;
        //                 }
        //                 else{
        //                     excitable[j][i] = 1;
        //                 }
        //             }
        //         }
        //     }
        // }
        ll q;
    cin >> q;
    forn(i,q){
        ll x1, x2;
        cin >> x1 >> x2;
        x1--;
        x2--;
        if(check[x2]-check[x1]==0){
            cout << "YES"
                 << "\n";
        }
        else{
            cout << "NO"
                 << "\n";
        }
        // bool isexitloop = false;
        // if(check.size()>0){
        //     ll l = 0;
        //     ll r = check.size()-1;
        //     while(l<=r){
        //         ll mid = l + (r - l) / 2;
        //         if(check[mid]>x2){
        //             r = mid - 1;
        //         }
        //         else if(check[mid]<x1){
        //             l = mid + 1;
        //         }
        //         else{
        //             cout << "NO"
        //                  << "\n";
        //             isexitloop = true;
        //             break;
        //         }
        //     }
        //     if(isexitloop){
        //         continue;
        //     }
        //     cout << "YES"
        //          << "\n";
        // }
        // else{
        //     cout << "YES<<"
        //          << "\n";
        // }
    }
}
int main(){
solve();
return 0;
}