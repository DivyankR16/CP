#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll a,b;
cin>>a>>b;
if(a==b){
    cout<<0<<"\n";
    return;
}
if(b>a){
    if((b-a)%2==0){
        cout<<2<<"\n";
    }
    else{
        cout<<1<<"\n";
    }
}
else{
    if((a-b)%2==0){
        cout<<1<<"\n";
    }
    else{
        cout<<2<<"\n";
    }
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