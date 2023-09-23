#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
const ll N=1e6+7;
ll minDiv[N];
void solve(){
ll n,m;
cin>>n>>m;
if(n==1 || minDiv[n]>m){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
}
}
int main(){
ll t;
cin>>t;
for(ll i=2;i*i<N;i++){
    if(minDiv[i]==0){
        minDiv[i]=i;
        for(ll j=i;j<N;j+=i){
            if(minDiv[j]==0){
            minDiv[j]=i;}
        }
    }
}
for(ll i=1;i<N;i++){
    if(minDiv[i]==0){
        minDiv[i]=i;
    }
}
while(t--){
solve();
}
return 0;
}