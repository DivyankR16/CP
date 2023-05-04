#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll arr[2][n];
forn(i,2){
    forn(j,n){
        arr[i][j]=0;
    }
}
arr[0][0]=2*n;
arr[1][n-1]=2*n-1;
ll i=0;
ll dec=1;
ll inc=2*n-2;
bool check=true;
while(i<n-1){
if(check){
    arr[0][i+1]=dec++;
    arr[1][i]=dec++;
    check=!check;
}
else{
    arr[1][i]=inc--;
    arr[0][i+1]=inc--;
    check=!check;
}
i++;
}
forn(i,2){
    forn(j,n){
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}
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