#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n){
    cin>>a[i];
}
ll sum=0;
ll prod=1;
// bool issum0=true;
// bool ispro0=true;
forn(i,n){
    sum+=a[i];
    prod*=a[i];
}
if(sum!=0 && prod!=0){
    cout<<0<<"\n";
}
else{
    ll cnt0=0;
    forn(i,n){
        if(a[i]==0)cnt0++;
    }
    if(cnt0+sum==0){
        cout<<cnt0+1<<"\n";
    }
    else{
        cout<<cnt0<<"\n";
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