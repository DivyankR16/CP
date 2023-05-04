#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m,i1,j1,i2,j2;
string d;
cin>>n>>m>>i1>>j1>>i2>>j2>>d;
ll posor[n+1][m+1][4];
for(ll i=1;i<=n;i++){
    for(ll j=1;j<=m;j++){
        for(ll k=0;k<4;k++){
            posor[i][j][k]=0;
        }
    }
}
ll dr=(d[0]=='U')?1+((d[1]=='R')?2:0):0+((d[1]=='R')?2:0);
ll bounce=0;
while(!posor[i1][j1][dr]){
    if(i1==i2 && j1==j2)
    {cout<<bounce<<"\n";
    return;}
    ll chk=0;
    if(dr%2==1 && i1==1){
        dr-=1;
        chk++;
    }
    if(dr%2==0 && i1==n){
        dr+=1;
        chk++;
    }
    if(dr>=2 && j1==m){
        dr-=2;
        chk++;
    }
    if(dr<2 && j1==1){
        dr+=2;
        chk++;
    }
    bounce+=min((ll)1,chk);
    if(posor[i1][j1][dr]){
        break;
    }
    posor[i1][j1][dr]=1;
    if(dr%2==1){
        i1--;
    }
    else{
        i1++;
    }
    if(dr>=2){
        j1++;
    }
    else{
        j1--;
    }
}
cout<<-1<<"\n";
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}