#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m,s1,s2,d;
cin>>n>>m>>s1>>s2>>d;
if ((s2-d<=1 || s1+d>=n) && (s2+d>=m || s1-d<=1)) {
    cout<<-1<<endl;
}
else{cout<<n+m-2<<endl;}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}