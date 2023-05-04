#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll d[n];
ll ans[n];
forn(i,n){
    ans[i]=0;
}
forn(i,n){
    cin>>d[i];
}
ans[0]=d[0];
for(ll i=0;i<n-1;i++){
    if(ans[i]>=d[i+1] && d[i+1]!=0){
        cout<<-1<<endl;
        return;
    }
     ans[i+1]=d[i+1]+ans[i];
}
forn(i,n){
    cout<<ans[i]<<" ";
}
cout<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}