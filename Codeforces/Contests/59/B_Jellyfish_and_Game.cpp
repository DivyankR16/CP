#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m,k;
cin>>n>>m>>k;
ll a[n],b[m];
forn(i,n)cin>>a[i];
forn(i,m)cin>>b[i];
sort(a,a+n);
sort(b,b+m);
ll sumJ=0;
ll sumG=0;
forn(i,n){
    sumJ+=a[i];
}
forn(i,m){
    sumG+=b[i];
}
if(b[m-1]<=a[0]){
        if(k%2==1){
            cout<<sumJ<<"\n";
        }
        else{
            cout<<sumJ+b[0]-a[n-1]<<"\n";
        }
}
else {
    if(k==1){
        cout<<sumJ-a[0]+b[m-1]<<"\n";
    }
    else if(k==2){
        sumJ=sumJ-a[0]+b[m-1];
        sumJ=sumJ-max(b[m-1],a[n-1])+min(b[0],a[0]);
        cout<<sumJ<<"\n";
    }
    else{
        sumJ=sumJ-a[0]+b[m-1];
        sumJ=sumJ-max(b[m-1],a[n-1])+min(b[0],a[0]);
        ll sumJ1=sumJ+max(b[m-1],a[n-1])-min(b[0],a[0]);
        if(k%2==0){
            cout<<sumJ<<"\n";
        }
        else{
            cout<<sumJ1<<"\n";
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