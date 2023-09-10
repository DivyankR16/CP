#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll q;
cin>>q;
string ans="";
ans+='1';
ll prevVal=-1;
ll onVal=-1;
ll ppv=-1;
for(ll i=0;i<q;i++){
  ll x;
  cin>>x;
  if(i==0){prevVal=x;
  ppv=x;
    continue;}
    if(onVal==-1){
   if(x<prevVal || (x==prevVal && x<ppv)){
    onVal=x;
    ppv=x;
    ans+='1';
   }
   else if(x>=ppv){
    ppv=x;
      ans+='1';
   }
   else{
    ans+='0';
   }
    }
    else{
        if(x>=onVal && x<=prevVal && x>=ppv){
            ans+='1';
            ppv=x;
        }
        else{
            ans+='0';
        }
    }
}
cout<<ans<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}