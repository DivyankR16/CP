#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll a,b;
cin>>a>>b;
string s;
cin>>s;
vector<ll>v;
ll n=s.size();
ll i=0;
while(i<n && s[i]=='0')i++;
while(i<n && s[i]=='1')i++;
ll j=n-1;
while(j>=0 && s[j]=='0')j--;
while(i<=j){
    ll cnt=0;
    while(i<=j && s[i]=='0'){
        cnt++;
        i++;
    }
    if(cnt){
    v.push_back(cnt);}
    i++;
}
ll ans=LONG_LONG_MAX;
if(v.size()==0){
    bool isOne=false;
    forn(i,n){
       if(s[i]=='1'){
        isOne=true;
        break;
       }
    }
    if(isOne){
        cout<<a<<"\n";
    }
    else{
        cout<<0<<"\n";
    }
}
else{
    ans=min(ans,(v.size()+1)*a);
    ll check=ans;
    sort(v.begin(),v.end());
    for(auto e:v){
        check-=a;
        check+=b*e;
    ans=min(ans,check);
    }
    cout<<ans<<"\n";
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