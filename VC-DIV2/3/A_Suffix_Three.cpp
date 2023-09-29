#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string s;
cin>>s;
ll n=s.size();
string ck="";
string s1="po";
string s2="desu";
string s3="masu";
string s4="mnida";
ll i=n-1;
while(i>=0 && s[i]!='_'){
    ck+=s[i];
    reverse(ck.begin(),ck.end());
    if(ck.size()==2 && ck==s1){
    cout<<"FILIPINO"<<"\n";
    break;
}
else if(ck.size()==4 && ck==s2 || ck==s3){
    cout<<"JAPANESE"<<"\n";
    break;
}
else if(ck.size()>=5){
    cout<<"KOREAN"<<'\n';
    break;
}
reverse(ck.begin(),ck.end());
    i--;
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