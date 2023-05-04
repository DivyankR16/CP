#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll a,b,c,d;
cin>>a>>b>>c>>d;
if(a==0){
    cout<<1<<"\n";
    return;
}
ll jokes=a+2*min(b,c)+min(a,max(b,c)-min(b,c));
if(a>=(max(b,c)-min(b,c))){
    ll val=a-(max(b,c)-min(b,c));
    if(d){
        jokes+=min(val,d);
        d-=min(val,d);
        if(d)jokes++;
    }
}
else{ll val=max(b,c)-min(b,c)-a;
    if(val || d){
     jokes++;}
}
cout<<jokes<<"\n";
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}