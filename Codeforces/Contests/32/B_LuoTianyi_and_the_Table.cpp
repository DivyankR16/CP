#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
ll N=n*m;
ll b[N];
forn(i,N){
    cin>>b[i];
}
sort(b,b+N);
ll ans;
if(n>=m){
ans=max((n-1)*(m-1)*(b[N-1]-b[0])+(n-1)*(b[N-1]-b[0])+(m-1)*(b[N-1]-b[1]),(n-1)*(m-1)*(b[N-1]-b[0])+(n-1)*(b[N-1]-b[0])+(m-1)*(b[N-2]-b[0]));
}
else{
ans=max((n-1)*(m-1)*(b[N-1]-b[0])+(m-1)*(b[N-1]-b[0])+(n-1)*(b[N-1]-b[1]),(n-1)*(m-1)*(b[N-1]-b[0])+(m-1)*(b[N-1]-b[0])+(n-1)*(b[N-2]-b[0]));
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