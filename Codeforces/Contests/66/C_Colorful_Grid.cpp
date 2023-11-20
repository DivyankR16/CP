#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m, k;
    cin >> n >> m >> k;
    if(k<(n+m-2)){
        cout << "NO"
             << "\n";
        return;
    }
    n--;
    m--;
    if(((n+m)%2==1 && k%2==0) || ((n+m)%2==0 && k%2==1)){
        cout << "NO"
             << "\n";
        return;
    }
    cout << "YES"
         << "\n";
    n++;
    m++;
    char check1[n][m - 1];
    forn(i,n){
        for (ll j = 0; j < m-1;j++){
            check1[i][j] = 'B';
        }
    }
    char check2[n - 1][m];
    forn(i,n-1){
       forn(j,m){
           check2[i][j] = 'B';
       }
    }
    for (ll i = 1; i < m-1;i++){
        if (check1[0][i - 1] == 'R')
        {
            check1[0][i] = 'B';
        }
        else
        {
            check1[0][i] = 'R';
        }
    }
    check1[1][0] = 'B';
    if(check1[0][m-2]=='B'){
        check2[0][m - 1] = 'R';
    }
    else{
        check2[0][m - 1] = 'B';
    }
    for (ll i = 1; i < n - 1;i++)
    {
        if (check2[i-1][m-1] == 'R')
        {
            check2[i][m-1] = 'B';
        }
        else
        {
            check2[i][m-1] = 'R';
        }
    }
    check2[0][0] = 'R';
    check2[0][1] = 'R';
    if(check2[n-3][m-1]=='B'){
        check1[n - 2][m - 2] = 'R';
        check1[n - 2][m - 2] = 'R';
        check2[n - 2][m - 1] = 'R';
        check2[n - 2][m - 2] = 'B';
        check1[n - 1][m - 2] = 'R';
    }
    else{
        check1[n - 2][m - 2] = 'B';
        check1[n - 2][m - 2] = 'B';
        check2[n - 2][m - 1] = 'B';
        check2[n - 2][m - 2] = 'R';
        check1[n - 1][m - 2] = 'B';
    }
    // char need = check2[n - 2][m - 1];
    // check2[n - 2][m - 2] = need;
    // if (need == 'B')
    // {
    //     check1[n - 1][m - 2] = 'R';
    //     check1[n - 2][m - 2] = 'R';
    // }
    // else
    // {
    //     check1[n - 1][m - 2] = 'B';
    //     check1[n - 2][m - 2] = 'B';
    // }
    forn(i,n){
        forn(j,m-1){
            cout << check1[i][j] << " ";
        }
        cout << "\n";
    }
    forn(i,n-1){
        forn(j,m){
            cout << check2[i][j] << " ";
        }
        cout << "\n";
    }
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}