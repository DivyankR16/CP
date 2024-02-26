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
        cin >> a[i][j];
    }
}
ll x = -1;
ll y = -1;
forn(i,n){
    forn(j,n){
        if(a[i][j]=='1'){
            x = i;
            y = j;
            break;
        }
    }
}
ll cntx = 0;
if(x==-1 && y==-1){
    cout << "TRIANGLE"
         << "\n";
    return;
}
ll nx = x;
ll ny = y;
while(nx<n && a[nx][y]=='1'){
    nx++;
    cntx++;
}
ll cnty = 0;
while (ny < n && a[x][ny] == '1')
{
    ny++;
    cnty++;
}
cout << cntx << "\n";
cout << cnty << "\n";
if(cntx==cnty){
    cout << "SQUARE"
         << "\n";
}
else{
    cout << "TRIANGLE"
         << "\n";
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