#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
string s;
cin>>s;
ll pos0[n];
ll pos1[n];
// memset(pos0,0,sizeof(pos0));
// memset(pos1,0,sizeof(pos1));
pos0[0]=-1;
pos1[n-1]=n;
for(ll i=0;i<n;i++){
   if(i)pos0[i]=pos0[i-1];
   if(s[i]=='0')pos0[i]=i;
}
for(ll i=n-1;i>=0;i--){
   if(i!=n-1)pos1[i]=pos1[i+1];
   if(s[i]=='1')pos1[i]=i;
}
set<pair<ll,ll>>st;
forn(i,m){
   ll l,r;
   cin>>l>>r;
   l--;r--;
   ll pos1inr=pos1[l];
   ll pos0inl=pos0[r];
   if(pos0inl<pos1inr){
       st.insert({-1,-1});
   }
   else{
      st.insert({pos0inl,pos1inr});
   }
}
cout<<st.size()<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}