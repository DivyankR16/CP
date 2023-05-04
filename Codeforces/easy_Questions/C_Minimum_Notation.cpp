#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
//VERY HAPPY AFTER SOLVING THIS
void solve(){
string s;
cin>>s;
ll n=s.length();
if(n==1){
    cout<<s<<endl;
    return;}
string ans=s;
sort(ans.begin(),ans.end());
map<char,ll>m;
char val=s[n-1];
for (ll i = n-2; i >=0; i--)
{ 
    if(s[i]>val){
        m[s[i]]++;
    }
    val=min(val,s[i]);
}
for(ll i=n-1;i>=0;i--){
    if(m[ans[i]]){
        m[ans[i]]--;
        ans[i]=ans[i]!='9'?(ll)ans[i]+1:ans[i];
    }
}
cout<<ans<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}