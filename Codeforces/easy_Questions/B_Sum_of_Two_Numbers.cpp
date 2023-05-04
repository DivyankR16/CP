#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll count9(ll n){
    ll cnt=0;
    while(n>0){
        if(n%10==9)cnt++;
        n/=10;
    }
    return cnt;

}
void solve(){
ll n;
cin>>n;
if(n%2==0){
    cout<<n/2<<" "<<n/2<<"\n";
}
else{
    if((n/2+1)%10!=0){
        cout<<n/2+1<<" "<<n/2<<"\n";
    }
    else{ll a=n/2;
        ll b=n/2+1;
        ll cnt9a=count9(a);
        ll cnt9b=0;
        ll da=a;
        //ll db=b;
        ll val=0;
        while(cnt9a>cnt9b){
            cnt9a--;
            cnt9b++;
           a-=pow(10,val)*(da%10);
           b+=pow(10,val)*(da%10);
           da/=10;
           val++;
        }
        if(cnt9a==cnt9b){
            cout<<a<<" "<<b<<"\n";
        }
        else{
            val--;
            a+=pow(10,val)*5;
            b-=pow(10,val)*5;
            cout<<a<<" "<<b<<"\n";
        }
    }
}
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