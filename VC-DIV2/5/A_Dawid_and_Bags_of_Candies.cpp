#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll a[4];
forn(i,4){
    cin>>a[i];
}
sort(a,a+4);
ll sum1=0;
ll sum2=0;
for(ll i=0;i<4;i++){
   sum1+=a[i];
}
if(a[0]+a[3]==a[1]+a[2] || a[3]==a[0]+a[1]+a[2]){
    cout<<"YES"<<"\n";
    return;
}
cout<<"NO"<<"\n";
}
int main(){
solve();
return 0;
}