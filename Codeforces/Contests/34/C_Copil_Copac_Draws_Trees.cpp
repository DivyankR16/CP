#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll v[n][2];
forn(i,n){
    forn(j,2){
        cin>>v[i][j];
    }
}
bool isInTree[n];
forn(i,n)isInTree[i]=0;
ll ans=0;
isInTree[0]=1;

}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}