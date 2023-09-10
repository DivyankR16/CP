#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll freq[131073][26];
void calcFreq(string s){
    ll n=s.size();
    for(char c='a';c<='z';c++){
        if(s[0]==c){
            freq[0][c-'a']=1;
        }
        else{
            freq[0][c-'a']=0;
        }
    }
    for(ll i=1;i<n;i++){
    for(char c='a';c<='z';c++){
        if(s[i]==c){
            freq[i][c-'a']=1+freq[i-1][c-'a'];
        }
        else{
            freq[i][c-'a']=freq[i-1][c-'a'];
        }
    }
    }
}
ll charCount(ll i,char c,ll pow){
    ll j=i+(1<<(pow))-1;
    return freq[j-1][c-'a']-((i==1)?0:freq[i-2][c-'a']);
}
ll ans(string &s,ll len,char c,ll i){
    if(len==0){
        return s[i-1]!=c;
    }
    ll cost1=(1<<(len-1))-charCount(i,c,len-1);
    ll cost2=(1<<(len-1))-charCount(i+(1<<(len-1)),c,len-1);
    return min(cost1+ans(s,len-1,c+1,i+(1<<(len-1))),cost2+ans(s,len-1,c+1,i));
}
void solve(){
ll n;
cin>>n;
string s;
cin>>s;
calcFreq(s);
ll len=0;
while(n>=2){
    n/=2;
    len++;
}
cout<<ans(s,len,'a',1)<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}