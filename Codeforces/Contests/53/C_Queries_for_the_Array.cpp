#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string s;
cin>>s;
ll n=s.length();
ll i=0;
ll noneg=0;
ll nopos=0;
ll state=-1;
bool ispossible=true;
bool isonepossible=false;
bool iszeropossible=false;
while(i<n){
   if(s[i]=='+')nopos++;
   else if(s[i]=='-'){
    noneg++;
    if(nopos-noneg<=1){
      isonepossible=true;
    }
    if(nopos-noneg<=0){
      iszeropossible=true;
    }
   }
   else{
    if(s[i]=='1'){
        if(state!=-1){
            if(state==0){
                if(!isonepossible){
                   ispossible=false;
                   break;
                }
            }
        }
        state=1;
    }
    else{
        if(state!=-1){
            if(state==1){
                if(!isonepossible){
                    ispossible=false;
                    break;
                }
                else{
                    if(nopos-noneg==1 || nopos-noneg==0){
                        ispossible=false;
                        break;
                    }
                }
            }
        }
        else{
            if(nopos-noneg==0 || nopos-noneg==1){
                ispossible=false;
                break;
            }
        }
        state=0;
    }
    isonepossible=false;
   }  
   i++;
}
if(ispossible){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
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