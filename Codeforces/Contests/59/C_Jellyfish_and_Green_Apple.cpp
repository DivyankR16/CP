#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
if(m%2==1){
    if(n%m==0){
        cout<<0<<"\n";
    }
    else{
        cout<<-1<<"\n";
    }
}
else{
ll val=n/m;
ll val2=val*m;
n-=val2;
if(!n){
   cout<<0<<"\n";
}
else{
       ll ck=__gcd(m,n);
    m/=ck;
    n/=ck;
    bool flag=false;
     if(__builtin_popcount(m)!=1){
        flag=true;
     }
     if(flag){
        cout<<-1<<"\n";
        return;
     }
     vector<ll>vec;
    bitset<64>bits(n);
    forn(i,64){
        if(bits[i]){
            vec.push_back(1<<i);
        }
    }
    ll ans=0;
    for(auto i:vec){
        ll im=m/i-1;
        ans+=im*i;
    }
    ans=ans*ck;
    cout<<ans<<"\n";
}
}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}