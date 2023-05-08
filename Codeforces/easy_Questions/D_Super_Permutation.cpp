#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
if(n==1) {
      cout<<1<<endl;
      return;
    }
    if(n%2==1) {
      cout<<-1<<endl;
      return;
    }
    vector<int> v(n);
    v[0]=n;
    int z=1;
    for(int i=1;i<=n/2;i++){
      if(z){
        v[i]=i;
        v[n-i]=n-i;
      }else{
        v[i]=n-i;
        v[n-i]=i;
      }
      z=1-z;
    }
    for(ll i=0;i<v.size();i++){
        cout<<v[i]<<" ";
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