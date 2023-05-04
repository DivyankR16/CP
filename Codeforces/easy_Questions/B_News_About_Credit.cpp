#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
//Help I ambeing Surrounded//
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
queue<ll>q;
vector<pair<ll,ll>>v;
set<pair<ll,ll>>s;
forn(i,n){
    if(i)s.insert(make_pair(a[i],i));    
}
q.push(0);
ll count=0;
while(!q.empty()){                           
    count++;
    ll idx=q.front();
    q.pop();
    while(a[idx]-- && s.size()){
        pair<ll,ll>p=*s.rbegin();
        s.erase(p);
        q.push(p.second);
        v.push_back(make_pair(idx+1,p.second+1));
    }
}
if(count!=n){
    cout<<-1<<endl;
}
else{
    cout<<v.size()<<endl;
    forn(i,v.size()){
         cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
}
int main(){
solve();
return 0;
}