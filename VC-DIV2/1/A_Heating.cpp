#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll c,sum;
    cin>>c>>sum;
ll d = sum / c;
	ll rem = sum % c;
	cout<<rem*(d+1)*(d+1)+(c-rem)*d*d<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}