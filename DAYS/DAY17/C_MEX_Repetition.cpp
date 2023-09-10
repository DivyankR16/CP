#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void reversek(vector<ll>&arr,ll st,ll end){
    ll n=end-st+1;
    ll val;
    if(n%2==1){
        val=n/2+1;
    }
    else{
        val=n/2;
    }
    forn(i,val){
        swap(arr[st+i],arr[end-i]);
    }
} 
void rightRotate(vector<ll>&arr,ll k){
    ll n=arr.size();
    reversek(arr,0,n-k-1);
    if(k!=0){
    reversek(arr,n-k,n-1);
    }
    reversek(arr,0,n-1);
}
void solve(){
ll n,k;
cin>>n>>k;
ll a[n];
ll sum=n*(n+1)/2;
forn(i,n){
    cin>>a[i];
    sum-=a[i];
}
vector<ll>ans;
forn(i,n){
    ans.push_back(a[i]);
}
ans.push_back(sum);
ll need=k%ans.size();
rightRotate(ans,need);
forn(i,n){
    cout<<ans[i]<<" ";
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