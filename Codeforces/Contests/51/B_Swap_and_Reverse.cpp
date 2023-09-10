#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
k--;
string s;
cin>>s;
string str1="";
string str2="";
forn(i,n){
    if(i%2==0){
        str1+=s[i];
    }
    else{
        str2+=s[i];
    }
}
sort(str1.begin(),str1.end());
sort(str2.begin(),str2.end());
ll cnt1=0;
ll cnt2=0;
string s1="";
while(cnt1<str1.size() && cnt2<str2.size()){
       s1+=str1[cnt1];
       s1+=str2[cnt2];
       cnt1++;
       cnt2++;
}
while(cnt1<str1.size()){
    s1+=str1[cnt1];
    cnt1++;
}
while(cnt2<str2.size()){
    s1+=str2[cnt2];
    cnt2++;
}
if(k%2==1){
    sort(s.begin(),s.end());
    cout<<s<<"\n";
}
else{
    // ll len=(k+1)/2;
    // ll m=min(cnt1,cnt2);
    // string ans="";
    // for(ll i=0;i<=m-len+1;i++){
    //      ans+=min(str1[i],str2[i]);
    //      ans+=max(str1[i],str2[i]);
    // }
    // for(ll i=m-len+2;i<m;i++){
    //     ans+=str1[i];
    //     ans+=str2[i];
    // }
    cout<<s1<<"\n";
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