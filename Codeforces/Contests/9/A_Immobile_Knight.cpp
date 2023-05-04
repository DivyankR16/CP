#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
if(n==3 && m==2){
    cout<<2<<" "<<1<<endl;
}
else if(n==3 && m==3){
    cout<<2<<" "<<2<<endl;
}
else if(n==2 && m==3){
    cout<<1<<" "<<2<<endl;
}
else{
    cout<<1<<" "<<1<<endl;
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