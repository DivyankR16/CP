#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void swap(ll *a,ll *b){
    ll temp=*a;
    *a=*b;
    *b=temp;
}
void solve(){
ll n;
cin>>n;
ll a1=INT_MAX;
ll arr[n];
forn(i,n){
    arr[i]=i+1;
}
swap(arr[n-3],arr[0]);
if(n%2==1){
    if(n%3!=0){
        sort(arr,arr+n-3);
    }
    else{
        sort(arr,arr+n-3);
        sort(arr+3,arr+n-3,greater<ll>());
    }
}
else{
    if(n%3!=0){
        sort(arr,arr+n-3);
    }
    else{
        sort(arr,arr+n-3,greater<ll>());
    }
}
forn(i,n){
    cout<<arr[i]<<" ";
}

cout<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}