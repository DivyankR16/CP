#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
string s;
cin>>s;
ll l[k],r[k];
forn(i,k){
    cin>>l[i];
    l[i]--;
}
forn(i,k){
 cin>>r[i];
r[i]--;
}
ll q;
cin>>q;
ll cnt[n+1];
for(ll i=0;i<n+1;i++){
    cnt[i]=0;
}
forn(i,q){
   ll x;
   cin>>x;
   cnt[x-1]++;
}
string ans="";
forn(i,k){
    string s1=s.substr(l[i],r[i]-l[i]+1);
    ll left=l[i];
    ll modi=0;
    while(left<=(l[i]+r[i])/2){
        modi+=cnt[left]+cnt[r[i]-left+l[i]];
        if(modi%2==1){
            swap(s1[left-l[i]],s1[r[i]-left]);
        }
        left++;
    }
    ans+=s1;
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