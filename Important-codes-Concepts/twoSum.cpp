#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
bool solve(vector<ll>arr,ll target){
ll n=arr.size();
unordered_set<ll>s;
forn(i,n){
    if(s.find(target-arr[i])!=s.end()){
         return true;
    }
    s.insert(arr[i]);
}
return false;
}
int main(){
ll n,target;
cin>>n>>target;
vector<ll>arr;
forn(i,n){
    ll x;
    cin>>x;
    arr.push_back(x);
}
if(solve(arr,target)){
    cout<<"Yes there exists two elements with sum equal to "<<target<<"\n";
}
else{
    cout<<"No there doestnot exists two elements with sum equal to "<<target<<"\n";
}
return 0;
}