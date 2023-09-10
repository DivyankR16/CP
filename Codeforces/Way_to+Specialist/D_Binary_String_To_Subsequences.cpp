#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
string s;
cin>>s;
vector<ll>pos0,pos1;
ll ans[n];
ll cnt=0;
forn(i,n){
    ll abc;
    if(s[i]=='0'){
        if(pos1.empty()){
            abc=++cnt;
            pos0.push_back(abc);
        }
        else{
             abc=pos1[pos1.size()-1];
             pos1.pop_back();
             pos0.push_back(abc);
        }
    }
    else{
        if(pos0.empty()){
            abc=++cnt;
            pos1.push_back(abc);
        }
        else{
            abc=pos0[pos0.size()-1];
            pos0.pop_back();
            pos1.push_back(abc);
        }
    }
    ans[i]=abc;
}
cout<<cnt<<"\n";
forn(i,n){
    cout<<ans[i]<<" ";
}
cout<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}