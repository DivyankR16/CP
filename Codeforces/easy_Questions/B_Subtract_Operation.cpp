#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
ll a[n];
forn(i,n){
    cin>>a[i];
}
sort(a,a+n);
ll i=0;
ll j=1;
while(i<n && j<n){
    if(a[j]-a[i]==k){
        cout<<"YES"<<endl;
        return;
    }
    else if(a[j]-a[i]<k){
        j++;
    }
    else{
        i++;
    }
}
cout<<"NO"<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}