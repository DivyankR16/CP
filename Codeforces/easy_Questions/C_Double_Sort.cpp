#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void swap(ll *a,ll *b){
    ll temp=*a;
    *a=*b;
    *b=temp;
}
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll b[n];
forn(i,n)cin>>b[i];
vector<pair<ll,ll>>v;
for (ll i = 0; i < n-1; i++)
{for (ll j = i+1; j < n; j++)
{  if(a[i]>a[j]){
    swap(a[i],a[j]);
    swap(b[i],b[j]);
    v.push_back(make_pair(i+1,j+1));
}
else if(a[i]==a[j]){
    if(b[i]>b[j]){
    swap(a[i],a[j]);
    swap(b[i],b[j]);
    v.push_back(make_pair(i+1,j+1));
    }
}
}
}
bool flag=true;
forn(i,n-1){
    if(b[i]>b[i+1]){
        flag=false;
        break;
    }
}
if(flag){
    if(v.size()){
        cout<<v.size()<<endl;
     forn(i,v.size()){
        cout<<v[i].first<<" "<<v[i].second<<endl;
     }
    }
    else{cout<<0<<endl;}
}
else{cout<<-1<<endl;}

}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}