#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
string s;
cin>>s;
ll x=0;
ll y=0;
forn(i,n){
   if(s[i]=='U'){
    y++;
    if(x==1 && y==1){
        cout<<"YES"<<"\n";
        return;
    }
   }
   else if(s[i]=='D'){
     y--;
      if(x==1 && y==1){
        cout<<"YES"<<"\n";
        return;
    }
   }
   else if(s[i]=='L'){
    x--;
     if(x==1 && y==1){
        cout<<"YES"<<"\n";
        return;
    }
   }
   else{
    x++;
     if(x==1 && y==1){
        cout<<"YES"<<"\n";
        return;
    }
   }
}
cout<<"NO"<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}