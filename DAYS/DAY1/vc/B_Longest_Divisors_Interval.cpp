#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
bool ck=false;
for(ll i=1;i<=n;i++){
    if(n%i){
        cout<<i-1<<"\n";
        ck=true;
        break;
    }
}
if(!ck){
    cout<<n<<"\n";
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