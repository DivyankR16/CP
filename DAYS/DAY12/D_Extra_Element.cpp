#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
vector<pair<ll,ll>>v;
forn(i,n){
    ll x;
    cin>>x;
    v.push_back({x,i});
}
sort(v.begin(),v.end());
map<ll,ll>diff;
forn(i,n-1){
    diff[v[i+1].first-v[i].first]++;
}
// cout<<diff.size()<<"\n";
if(diff.size()>=3){
    cout<<-1<<"\n";
}
else{
    ll maxdiff=0;
    ll mindiff=INT_MAX;
    for(auto i:diff){
       if(i.second>maxdiff){
        maxdiff=i.first;
       }
       if(i.second<mindiff){
        mindiff=i.first;
       }
    }
    if(maxdiff==mindiff){
        cout<<n<<"\n";
        return;
    }
    // if(maxdiff==2*mindiff){
    //     forn(i,n-1){
    //         if(v[i+1].first-v[i].first==mindiff){
    //             if(i==0){
    //                 cout<<v[i+1].second+1<<"\n";
    //             }
    //             else{
    //             cout<<v[i+1].second+1<<"\n";
    //             return;
    //             }
    //         }
    //     }
    // }
    // else{
    //     cout<<-1<<"\n";
    // }
    forn(i,n-1){
        if(v[i+1].first-v[i].first==mindiff){
            if(i==0){
                cout<<v[i].second+1<<"\n";
                return;
            }
            else if(i==n-2){
                cout<<v[i+1].second+1<<"\n";
                return;
            }
            else{
               if(maxdiff==2*mindiff){
                cout<<v[i+1].second+1<<"\n";
                return;
               }
               else{
                cout<<-1<<"\n";
                return;
               }
            }
        }
    }
}
}
int main(){
solve();
return 0;
}