#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string s;
cin>>s;
ll n=s.length();
if(n==1){
    if(s[0]=='0'){
        cout<<0<<"\n";
    }
    else{
        cout<<1<<"\n";
    }
    return;
}
ll i=0;
ll cntstart=0;
ll cntend=0;
if(s[0]=='1'){
    ll j=0;
    while(s[j]=='1'){
       cntstart++;
       j++;
    }
}
if(s[n-1]=='1'){
    ll j=n-1;
    while(s[j]=='1'){
        cntend++;
        j--;
    }
}
ll cnt1=INT_MIN;
while(i<n){
    ll cntil1=0;
    while(i<n && s[i]=='1'){cntil1++;
    i++;}
    cnt1=max(cnt1,cntil1);
    i++;
}
if(cntstart==n){
    cout<<n*n<<"\n";
    return;
}
ll ans=max(cnt1,cntstart+cntend);
ll grandAns=INT_MIN;
ll val=1;
ll need=ans;
while(need){
    grandAns=max(grandAns,need*val);
    need--;
    val++;
}
if(!ans){
    cout<<0<<"\n";
}
else{
    cout<<grandAns<<"\n";
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