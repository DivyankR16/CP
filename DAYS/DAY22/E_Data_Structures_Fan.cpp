#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
ll X1=0;
ll X0=0;
forn(i,n)cin>>a[i];
string s;
cin>>s;
forn(i,n){
    if(s[i]=='1'){
        X1^=a[i];
    }
    else{
        X0^=a[i];
    }
}
ll preXor[n];
forn(i,n){
    if(i){
        preXor[i]=a[i]^preXor[i-1];
    }
    else{
        preXor[i]=a[i];
    }
}
ll q;
cin>>q;
forn(i,q){
    ll type;
    cin>>type;
    if(type==1){
        ll l,r;
        cin>>l>>r;
        if(l==1){
            X0^=preXor[r-1];
            X1^=preXor[r-1];
        }
        else{
            X0^=preXor[r-1]^preXor[l-2];
            X1^=preXor[r-1]^preXor[l-2];
        }
    }
    else{
        ll g;
        cin>>g;
       if(g){
        cout<<X1<<" ";
       }
       else{
        cout<<X0<<" ";
       }
    }
}
cout<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}