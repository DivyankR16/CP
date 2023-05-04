#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,d;
cin>>n>>d;
ll arr[n];
forn(i,n){
    cin>>arr[i];
}
sort(arr,arr+n);
ll c=n;
ll ans=0;
for (int i = n-1; i >=0; i--)
{if((d/arr[i]+1)<=c){
    ans++;
    c=c-(d/arr[i]+1);
}
else{break;}
}
cout<<ans<<endl;
}
int main(){
solve();

return 0;
}