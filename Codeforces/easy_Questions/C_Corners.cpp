#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
char s[n][m];
forn(i,n){
    forn(j,m){
       cin>>s[i][j];
    }
}
ll arr[n][m];
ll sum=0;
forn(i,n){
    forn(j,m){
      arr[i][j]=s[i][j]-'0';
      sum+=arr[i][j];
    }
}
ll sub=INT_MAX;
ll val=INT_MAX;
forn(i,n-1){
    forn(j,m-1){
        ll ct=arr[i][j]+arr[i+1][j]+arr[i][j+1]+arr[i+1][j+1];
        if(ct==0){
            continue;
        }
        else if(ct<=2){
          val=0;
        }
        else if(ct==3){
            val=1;
        }
        else{
            val=2;
        }
        sub=min(sub,val);
    }
}
if(sum==0){cout<<0<<endl;}
else{cout<<sum-sub<<endl;}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}