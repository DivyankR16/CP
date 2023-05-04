#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
ll arr[n];
forn(i,n){cin>>arr[i];}
int count=0;
for (int i = 1; i < n-1; i++)
{if(arr[i]>arr[i-1]+arr[i+1]){
    count++;}
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