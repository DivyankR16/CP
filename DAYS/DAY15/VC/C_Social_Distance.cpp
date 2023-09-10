#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
string s;
cin>>s;
k++;
bool is_all_zero=true;
vector<ll>pos1;
forn(i,n){
    if(s[i]=='1')pos1.push_back(i);
    is_all_zero&=(is_all_zero && s[i]=='0');
}
if(is_all_zero){
    if(n%k==0){
        cout<<n/k<<"\n";
    }
    else{
        cout<<n/k+1<<"\n";
    }
    return;
}
ll ans=0;
forn(i,pos1.size()-1){
    ll fst=pos1[i];
    ll scd=pos1[i+1];
    ll dif=scd-fst+1;
    if(dif%k==0){
        ans+=dif/k-2;
    }
    else{
        ans+=(dif/k+1)-2;
    }
}
if(s[0]!='1'){
    ll dif=pos1[0]+1;
    if(dif%k==0){
        ans+=dif/k-1;
    }
    else{
        ans+=(dif/k+1)-1;
    }
}
if(s[n-1]!='1'){
    ll dif=n-1-pos1[pos1.size()-1]+1;
     if(dif%k==0){
        ans+=dif/k-1;
    }
    else{
        ans+=(dif/k+1)-1;
    }
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