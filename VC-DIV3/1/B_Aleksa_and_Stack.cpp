#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[3];
a[0]=2;
a[1]=3;
cout<<a[0]<<" "<<a[1]<<" ";
for(ll i=2;i<n;i++){
   ll sm=a[((i-1)%3>=0?(i-1)%3:n+(i-1)%3)]+a[(i-2)%3>=0?(i-2)%3:n+(i-2)%3];
   a[i%3]=a[((i-1)%3>=0?(i-1)%3:n+(i-1)%3)]+1;
   while((3*a[i%3])%sm==0 || (a[i%3]+a[((i-1)%3>=0?(i-1)%3:n+(i-1)%3)])%3==0)a[i%3]++;
   cout<<a[i%3]<<" ";
}
cout<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}