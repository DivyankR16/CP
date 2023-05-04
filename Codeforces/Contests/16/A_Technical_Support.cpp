#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
string s;
cin>>s;
ll cq=0;
ll ca=0;
forn(i,n){
   if(s[i]=='Q'){
    cq++;
   }
   else{
    if(cq){
    cq--;}
   }
}
if(cq)cout<<"No"<<endl;
else cout<<"Yes"<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}