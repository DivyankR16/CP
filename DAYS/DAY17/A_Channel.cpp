#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,a,q;
cin>>n>>a>>q;
string s;
cin>>s;
ll pos=0;
ll neg=0;
forn(i,q){
    if(s[i]=='+')pos++;
    else neg++;
}
if(pos+a<n){
    cout<<"NO"<<"\n";
}
else{
    ll cur_on=a;
    if(cur_on>=n){
        cout<<"YES"<<"\n";
        return;
    }
    forn(i,q){
     if(s[i]=='+')cur_on++;
     else cur_on--;
     if(cur_on>=n){
        cout<<"YES"<<"\n";
        return;
     }
    }
    cout<<"MAYBE"<<"\n";
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