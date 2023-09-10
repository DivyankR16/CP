#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
vector<ll>ans;
if(n==1){
    cout<<1<<'\n';
    return;
}
ans.push_back(n);
while(n!=1){
    if(n%2==0){
        ans.push_back(n/2);
        n/=2;
    }
    else{
        ans.push_back(n*3+1);
        n=n*3+1;
    }
}
for(auto i:ans){
    cout<<i<<" ";
}
cout<<"\n";
}
int main(){
solve();
return 0;
}