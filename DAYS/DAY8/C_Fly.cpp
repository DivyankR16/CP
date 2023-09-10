#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll m;
cin>>m;
ll a[n],b[n];
forn(i,n){
    cin>>a[i];
    if(a[i]<=1){
        cout<<-1<<"\n";
        return;
    }
}
forn(i,n){
    cin>>b[i];
    if(b[i]<=1){
       cout<<-1<<"\n";
       return;
    }
}
double ans=m;
ans+=ans/(double)(b[0]-1);
ans+=ans/(double)(a[0]-1);
for(ll i=n-1;i>=1;i--){
    ans+=ans/(double)(b[i]-1);
    ans+=ans/(double)(a[i]-1);
}
cout<<fixed<<setprecision(6)<<ans-(double)m<<"\n";
}
int main(){
solve();
return 0;
}