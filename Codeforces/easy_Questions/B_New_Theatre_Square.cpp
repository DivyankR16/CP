#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m,x,y;
cin>>n>>m>>x>>y;
char a[n][m];
forn(i,n){
    forn(j,m){
        cin>>a[i][j];
    }
}
ll ans=0;
forn(i,n){
    ll j=0;
    while(j<m){
        ll count=0;
        while(j<m && a[i][j]!='*'){
            count++;
            j++;
        }
        if(count){
        if(count%2==1){
            if((count-1)*x>(count/2)*y){
                ans+=(count/2)*y;
            }
            else{
                ans+=(count-1)*x;
            }
            ans+=x;
        }
        else{
            if(count*x>(count/2)*y){
                ans+=(count/2)*y;
            }
            else{
                ans+=count*x;
            }
        }}
        j++;
    }
}
cout<<ans<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}