#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll arr[2][2];
forn(i,2){
    forn(j,2){
        cin>>arr[i][j];
    }
}
ll count=0;
forn(i,2){
    forn(j,2){
      if(arr[i][j]==1){
        count++;
      }
    }
}
if(count==4){
    cout<<2<<endl;
}
else if(count==0){
    cout<<0<<endl;
}
else{cout<<1<<endl;}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}