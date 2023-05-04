#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,x;
cin>>n>>x;
ll a[n];
forn(i,n)cin>>a[i];
sort(a,a+n);
bool arr[n];
forn(i,n){
    arr[i]=1;
}
ll i=0;
ll j=1;
ll ans=0;
while(j<n){
    while(j<n && a[j]<a[i]*x){
        j++;
    }
    if(j<n && a[j]==a[i]*x && arr[i]){
       ans=ans+2;
       i++;
       j++;
       arr[j]=0;
       arr[i]=0;
    }
    else if(j<n && a[j]==a[i]*x && !arr[i]){
        i++;
        j++;
        if()
    }
    while(j<n && a[j]>a[i]*x){
        i++;
    }
}
cout<<n-ans<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}