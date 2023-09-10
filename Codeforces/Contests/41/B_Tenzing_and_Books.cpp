#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,x;
cin>>n>>x;
ll knowledge=0;
forn(j,3){
    vector<ll>v(n);
    forn(i,n){
        cin>>v[i];
    }
    for(auto y:v){
        if((x|y)!=x){
            break;
        }
        knowledge|=y;
    }
}
if(knowledge==x){
    cout<<"Yes"<<"\n";
}
else{
    cout<<"No"<<"\n";
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