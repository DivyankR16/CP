#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll x;
cin>>x;
bool ans=false;
forn(i,11){
    if((x-i*111)>=0 && (x-i*111)%11==0){
        ans=true;
        break;
    }
}
if(ans)cout<<"YES"<<"\n";
else cout<<"NO"<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}