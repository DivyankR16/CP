#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll q;
cin>>q;
ll h=LONG_LONG_MAX;
ll h_min=1;
ll h_max=LONG_LONG_MAX;
forn(i,q){
    ll f;
    cin>>f;
    if(f==1){
        ll a,b,n;
        cin>>a>>b>>n;
        ll l_limit,r_limit;
        if(n==1){     //Special Case
            l_limit=1;
            r_limit=a;
        }
        else{
            l_limit=(n-2)*(a-b)+a+1;   //Strictly greater than max_height achieved in (n-1) days
            r_limit=(n-1)*(a-b)+a;     //Upto max_height achieved in (n) days 
        }
        if(r_limit<h_min || l_limit>h_max){
            cout<<0<<" ";   //ignoring case
        }
        else{//taking intersection 
            cout<<1<<" ";
            h_min=max(h_min,l_limit);
            h_max=min(h_max,r_limit);
        }
    }
    else if(f==2){
        ll a,b;
        cin>>a>>b;
        // check both for h_min and h_max
        ll for_h_min=max(1LL,(h_min-b-1)/(a-b)+1);
        ll for_h_max=max(1LL,(h_max-b-1)/(a-b)+1);
        if(for_h_min==for_h_max){
            cout<<for_h_min<<" ";
        }
        else{
            cout<<-1<<" ";
        }
    }
}
cout<<"\n";
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}