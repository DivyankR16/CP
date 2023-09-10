#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string s;
cin>>s;
if(s=="()"){
    cout<<"NO"<<"\n";
    return;
}
cout<<"YES"<<"\n";
ll n=s.length();
string ck="";
if(n%2==0){
forn(i,n/2){
   ck+='(';
}
forn(i,n/2){
    ck+=')';
}
string pk="";
bool hh=true;
forn(i,n){
    if(hh){
        pk+='(';
        hh=!hh;
    }
    else{
        pk+=')';
        hh=!hh;
    }
}
if(s==ck){
    string ans=pk;
    ans+=ans;
    cout<<ans<<"\n";
}
else{
    string ans=ck;
    ans+=ans;
    cout<<ans<<"\n";
}
}
else{
    bool allsame=true;
    forn(i,n-1){
        if(s[i]!=s[i+1]){
            allsame=false;
            break;
        }
    }
    if(!allsame){
        string ans="";
        bool hh=true;
forn(i,2*n){
    if(hh){
        ans+='(';
        hh=!hh;
    }
    else{
        ans+=')';
        hh=!hh;
    }
}
cout<<ans<<"\n";
    }
    else{
    forn(i,n){
        cout<<'(';
    }
    forn(i,n){
        cout<<')';
    }
    cout<<"\n";
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