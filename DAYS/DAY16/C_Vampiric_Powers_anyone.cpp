#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
int n;
cin>>n;
int a[n];
forn(i,n)cin>>a[i];
int ans=0;
int val=(1<<8);
for(int i=1;i<val;i++){
    vector<ll>store(val+1);
    int valxor=0;
    for(int j=0;j<n;j++){
        valxor^=a[j];
        if(valxor==i){
           ans=i;
           break;
        }
        else if(store[valxor^i]){
                ans=i;
                break;
        }
        store[valxor]++;
    }
    }
cout<<ans<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}