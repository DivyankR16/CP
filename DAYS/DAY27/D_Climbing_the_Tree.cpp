#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll q;
cin>>q;
ll hll=-1;
ll hul=-1;
forn(i,q){
    ll event;
    cin>>event;
    if(event==1){
        ll a,b,n;
        cin>>a>>b>>n;
       if(hll==-1 && hul==-1){
        cout<<1<<" ";
        hll=(a-b)*(n-2)+a+1;
        hul=(a-b)*(n-1)+a;
        if(n==1)hll=1;
       }
       else{
        ll cur_hll=(a-b)*(n-2)+a+1;
        ll cur_hul=(a-b)*(n-1)+a;
        if(n==1)cur_hll=1;
        if(cur_hll>hul || cur_hul<hll){
            cout<<0<<" ";
        }
        else{
            cout<<1<<" ";
            hll=max(hll,cur_hll);
            hul=min(hul,cur_hul);
        }
       }
    }
    else{
        ll a,b;
        cin>>a>>b;
        if(hul==-1 && hll==-1){
            cout<<-1<<" ";
        }
        else{
            ll ck1=max(1ll,(hll-b-1)/(a-b)+1);
            ll ck2=max(1ll,(hul-b-1)/(a-b)+1);
            if(ck1==ck2){
                cout<<ck1<<" ";
            }
            else{
                cout<<-1<<" ";
            }
        }
    }
}
cout<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}