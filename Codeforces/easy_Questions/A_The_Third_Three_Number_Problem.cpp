#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
if(n%2==0){
    cout<<0<<" "<<n/2<<" "<<0<<endl;
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