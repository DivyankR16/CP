#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
ll s[k];
forn(i,k)cin>>s[i];
for (ll i = k-1; i > 0; i--)
{
    s[i]-=s[i-1];                          
}
bool flag=true;
for(ll i=1;i<k-1;i++){
   if(s[i]>s[i+1]){
    flag=false;
    break;
   }
}
if(!flag){
    cout<<"No"<<endl;
    return;
}
if(k>1 && (n-k+1)*s[1]>=s[0]){
    cout<<"Yes"<<endl;
}
else if(k<=1){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}