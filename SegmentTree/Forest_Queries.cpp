#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, q;
    cin >> n >> q;
   char forest[n][n];
    forn(i,n){
        forn(j,n){
            cin >> forest[i][j];
        }
    }
ll preMatSum[n][n];
forn(i,n){
    forn(j,n){
        preMatSum[i][j] = 0;
    }
}
forn(i,n){
    forn(j,n){
        if(!i && !j){
            preMatSum[i][j]+= (forest[i][j]=='*'?1:0);
        }
        else if(!i){
            preMatSum[i][j] += preMatSum[i][j - 1] + (forest[i][j]=='*'?1:0);
        }
        else if(!j){
            preMatSum[i][j] += preMatSum[i - 1][j] + (forest[i][j]=='*'?1:0);
        }
        else{
            preMatSum[i][j] += -preMatSum[i - 1][j - 1] + preMatSum[i - 1][j] + preMatSum[i][j - 1] + (forest[i][j] == '*' ? 1 : 0);
        }
    }
}
// forn(i, n)
// {
//     forn(j, n)
//     {
//         cout<<preRowSum[i][j] << " ";
//     }
//     cout << "\n";
// }
forn(i,q){
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x1--;
    y1--;
    x2--;
    y2--;
    if(!x1 && !y1){
        cout << preMatSum[x2][y2]<<"\n";
    }
    else if(!x1){
        cout << preMatSum[x2][y2] - preMatSum[x2][y1 - 1]<<"\n";
    }
    else if(!y1){
        cout << preMatSum[x2][y2] - preMatSum[x1 - 1][y2]<<"\n";
    }
    else{
        cout << preMatSum[x2][y2] - preMatSum[x1 - 1][y2] - preMatSum[x2][y1 - 1] + preMatSum[x1 - 1][y1 - 1]<<"\n";
    }
}
}
int main(){
solve();
return 0;
}