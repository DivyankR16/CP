#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
vector<ll>x(n);
forn(i,n){
    cin>>x[i];
}
vector<ll>t(n);
forn(i,n){
    cin>>t[i];
}
ll sum=0;
forn(i,n){
    sum+=t[i];
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