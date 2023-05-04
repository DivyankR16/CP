#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=1;i<=n;i++)
void solve(){
ll n,l,r;
cin>>n>>l>>r;
ll arr[n];
bool flag=true;
for (int i = 1; i <=n; i++)
{if(((l-1)/(i)+1)*(i)<=r){
    arr[i]=((l-1)/(i)+1)*(i);
}
else{flag =false;}
}
if(flag){
    cout<<"YES"<<endl;
    forn(i,n){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
else{cout<<"NO"<<endl;}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}