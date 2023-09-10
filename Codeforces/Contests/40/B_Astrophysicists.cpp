#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k,g;
cin>>n>>k>>g;
if(n>k*g){
    cout<<k*g<<"\n";
    return;
}
if(g%2==0){
    if((g/2-1)*n>=k*g){
        cout<<k*g<<"\n";
    }
    else{
        ll val=(g/2-1)*n;
        ll h=k*g-(val-(g/2-1));
        if(h%g<=(g/2-1)){
            cout<<(g/2-1)*(n-1)+h%g<<"\n";
        }
        else{
            cout<<(g/2-1)*(n-1)-((g-(h%g)))<<"\n";
        }
    }
}
else{
    if((g/2)*n>=k*g){
        cout<<k*g<<"\n";
    }
    else{
        ll val=(g/2)*n;
        ll h=k*g-(val-(g/2));
        if(h%g<=(g/2)){
            cout<<(g/2)*(n-1)+h%g<<"\n";
        }
        else{
            cout<<(g/2)*(n-1)-((g-(h%g)))<<"\n";
        }
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