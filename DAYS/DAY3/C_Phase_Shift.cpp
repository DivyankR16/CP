#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
string s;
cin>>s;
string ans="";
ll a[26];
forn(i,26){
    a[i]=-1;
}
map<ll,ll>mp;
forn(i,n){
    if(mp.find(s[i]-'a')==mp.end()){
         forn(j,26){
            if(a[j]==-1 && j!=s[i]-'a'){
                ll cnt=0;
                ll val=j;
                bool ck=false;
                while(mp.find(val)!=mp.end()){
                    val=mp[val];
                    cnt++;
                    if(val==s[i]-'a'){
                        ck=true;
                        break;
                    }
                }
                if(!(ck && cnt<25)){
                char c=j+'a';
                ans+=c;
                mp[s[i]-'a']=j;
                a[j]=1;
                break;
                }
            }
         }
    }
    else{
        char c=mp[s[i]-'a']+'a';
        ans+=c;
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