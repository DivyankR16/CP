#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll l,r;
cin>>l>>r;
ll a=sqrtl(l);
ll b=sqrtl(r);
ll s1=a*a;
ll s2=b*b;
ll ans=(b-a)*3;
ll a1=(l-s1)?-((l-s1-1)/a+1):0;
ll a2=(r-s2)?((r-s2)/b+1):1;
ans+=a1+a2;
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