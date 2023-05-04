#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll x[n];
forn(i,n)cin>>x[i];
if(n==1){
    cout<<"YES"<<endl;
    return;
}
ll diff[n-1];
for (ll i = 0; i < n-1; i++)
{
    diff[i]=x[i+1]-x[i];
}
sort(diff,diff+n-1);
forn(i,n-1){
    if(diff[i]>3){
        cout<<"NO"<<endl;
        return;
    }
}
ll count1=0;
ll count2=0;
ll count3=0;
forn(i,n-1){
    if(diff[i]==1)count1++;
    if(diff[i]==2)count2++;
    if(diff[i]==3)count3++;
}
if(count1>=n-3){
    if(count3==2){
        cout<<"NO"<<endl;
    }
    else if(count3==1 && count2==1){
       cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
else{
    cout<<"NO"<<endl;
}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}