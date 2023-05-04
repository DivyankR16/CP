#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll k=n;
ll count=0;
while(k!=0){
count++;
k/=10;
}
ll delta=round(pow(10,count-1));
cout<<n-delta<<endl;
}
int main(){
int t;
cin>>t;
while(t--){
solve();
};
return 0;
}