#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
string s,t;
cin>>s;
cin>>t;
ll check=false;
ll val=1;
ll cnts=0;
ll cntb=0;
for(ll i=s.length()-1;i>0;i--){
    if(s[i]==s[i-1])val++;
    else{
        cnts=max(cnts,val);
        val=1;
    }
}
cnts=max(cnts,val);
val=1;
for(ll i=t.length()-1;i>0;i--){
    if(t[i]==t[i-1])val++;
    else{
        cntb=max(cntb,val);
        val=1;
    }
}
cntb=max(cntb,val);
cnts=max(cnts,cntb);
if(cnts>2){
    cout<<"No"<<"\n";
}
else if(cnts==2){
     if(s[s.length()-1]==s[s.length()-2]){
        if(t[t.length()-1]==s[s.length()-1]){
            cout<<"No"<<"\n";
            return;
        }
        if(t[t.length()-1]==t[t.length()-2]){
          if(t[t.length()-1]==s[s.length()-1]){
            cout<<"No"<<"\n";
            return;
        }
        }
            cout<<"Yes"<<"\n";
     }
}
else{
    cout<<"Yes"<<"\n";
}
cout<<cnts<<"\n";
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}