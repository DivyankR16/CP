#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string s;
cin>>s;
ll n=s.size();
for(ll i=0;i<n-1;i++){
    if(s[i]==s[i+1] && s[i]!='?'){
        cout<<-1<<"\n";
        return;
    }
}
for(ll i=0;i<n;i++){
    ll fill[3];
    memset(fill,0,sizeof(fill));
    if(!i){
        if(s[i]=='?'){
            if(i+1<n){
                if(s[i+1]!='?'){
                    fill[s[i+1]-'a']=1;
                }
            }
            for(ll j=0;j<3;j++){
                if(!fill[j]){
                    s[i]=(j+'a');
                   break;
                }
            }
        }
    }
    else if(i==n-1){
        if(s[i]=='?'){
            if(i-1>=0){
                 fill[s[i-1]-'a']=1;
            }
        for(ll j=0;j<3;j++){
                if(!fill[j]){
                    s[i]=(j+'a');
                   break;
                }
            }
        }
    }
    else{
        if(s[i]=='?'){
            if(s[i+1]!='?'){
                fill[s[i+1]-'a']=1;
            }
            if(s[i-1]!='?'){
                fill[s[i-1]-'a']=1;
            }
            for(ll j=0;j<3;j++){
                if(!fill[j]){
                    s[i]=(j+'a');
                   break;
                }
            }
        }
    }
}
cout<<s<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}