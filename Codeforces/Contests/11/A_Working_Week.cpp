#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
if(n==6){
    cout<<0<<endl;
    return;
}
if((n-4)%3==2){
    cout<<((n-4)/3+1)-1<<endl;
}
else{
    cout<<(n-4)/3-1<<endl;
}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}