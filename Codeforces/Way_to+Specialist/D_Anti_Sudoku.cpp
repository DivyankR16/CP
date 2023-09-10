#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
char anS[9][9];
forn(i,9){
    forn(j,9){
        cin>>anS[i][j];
    }
}
ll j=0;
for(ll i=0;i<9;i+=3){
       ll val=(anS[i][j]-'0')==9?1:(anS[i][j]-'0')+1;
       anS[i][j]=val+'0';
       j++;
}
for(ll i=1;i<9;i+=3){
       ll val=(anS[i][j]-'0')==9?1:(anS[i][j]-'0')+1;
       anS[i][j]=val+'0';
       j++;
}
for(ll i=2;i<9;i+=3){
       ll val=(anS[i][j]-'0')==9?1:(anS[i][j]-'0')+1;
       anS[i][j]=val+'0';
       j++;
}
forn(i,9){
    forn(j,9){
        cout<<anS[i][j];
    }
    cout<<"\n";
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