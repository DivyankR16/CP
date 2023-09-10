#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
char a[n][m];
forn(i,n){
    forn(j,m){
        cin>>a[i][j];
    }
}
string s="vika";
ll idx=0;
 forn(j,m){
forn(i,n){
        if(a[i][j]==s[idx]){
            idx++;
            break;
        }
    }
}
if(idx==4){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
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