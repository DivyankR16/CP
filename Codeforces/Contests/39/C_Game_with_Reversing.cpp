#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
string a,b;
cin>>a>>b;
ll ans1=0;
ll ans2=0;
forn(i,n){
    if(a[i]!=b[i])ans1++;
}
// reverse(b.begin(),b.end());
forn(i,n){
    if(a[i]!=b[n-1-i])ans2++;
}
if(ans1%2==0){
    ans1+=(ans1);
}
else{
  ans1+=(ans1-1);
}
if(ans2%2==0){
    if(ans2==0){
        ans2=2;
    }
    else{
    ans2+=(ans2-1);
    }
}
else{
    ans2+=(ans2);
}
cout<<min(ans1,ans2)<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}