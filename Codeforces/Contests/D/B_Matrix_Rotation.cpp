#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll a[2][2];
forn(i,2){
    forn(j,2){
        cin>>a[i][j];
    }
}
ll cnt=0;
ll val=a[0][0];
do{
    if(a[0][0]<a[0][1] && a[0][0]<a[1][0] && a[0][1]<a[1][1] && a[1][0]<a[1][1]){
        cout<<"YES"<<"\n";
        return;
    }
    ll temp=a[0][0];
    a[0][0]=a[1][0];
    a[1][0]=a[1][1];
    a[1][1]=a[0][1];
    a[0][1]=temp;
    cnt++;
}while(a[0][0]!=val);
cout<<"NO"<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}