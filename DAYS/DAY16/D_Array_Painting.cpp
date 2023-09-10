#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll ans=0;
vector<ll>need;
forn(i,n){
    ll x;
    cin>>x;
    if(need.empty() || x==0 || need.back()==0){
        need.push_back(x);
    }
    else if(x==2){
        need.back()=2;
    }
}
ll sz=need.size();
bool is_all_zeros=true;
for(auto i:need){
    is_all_zeros&=(i==0);
}
if(is_all_zeros){
   cout<<need.size()<<"\n";
   return;
}
vector<pair<ll,ll>>vec;
for(ll i=0;i<sz;i++){
    if(need[i]!=0){
        vec.push_back({i,need[i]});
        ans++;
    }
}
ll szz=vec.size();
for(ll i=0;i<szz;i++){
      if(!i){
        if(vec[i].first!=0){
            ans+=(vec[i].first-1);
            vec[i].second--;
        }
      }
      else{
        ll zeros=vec[i].first-vec[i-1].first-1;
        if(zeros>=2){
            ans+=(zeros-2);
             if(!vec[i-1].second){
                ans++;
            }
            else{
                vec[i-1].second--;
            }
            if(!vec[i].second){
                ans++;
            }
            else{
                vec[i].second--;
            }
        }
        else{
            if(vec[i-1].second){
                 vec[i-1].second--;
            }
            else{
                if(vec[i].second){
                    vec[i].second--;
                }
                else{
                    ans++;
                }
            }
        }
      }
}
if(vec[szz-1].first!=sz-1)   {
    ll zeros=sz-1-vec[szz-1].first;
    ans+=(zeros-1);
    if(!vec[szz-1].second){
        ans++;
    }
}  
cout<<ans<<"\n";
}
int main(){
solve();
return 0;
}