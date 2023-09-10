#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll nn[100];
forn(i,100){
    nn[i]=0;
}
forn(i,n){
    nn[a[i]]++;
}
bool check=true;
forn(i,99){
    if(nn[i]<nn[i+1]){
        check=false;
        break;
    }
}
if(check){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
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