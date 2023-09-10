#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
double ans=0.0;
forn(i,n){
    ans+=((double)1/(i+1));
}
cout<<ans<<"\n";
}
int main(){
solve();
return 0;
}