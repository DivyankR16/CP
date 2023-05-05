#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
set<ll>s;
forn(i,n){
    s.insert(a[i]);
}
ll cnt=1;
ll maxval;
ll mexarr=INT_MIN;
for(auto i:s){
    if(i!=cnt){
      mexarr=i;
      break;
    }
    cnt++;
    maxval=i;
}
if(mexarr==INT_MIN){
mexarr=maxval+1;
}
ll startidx=INT_MIN;
ll endidx=INT_MIN;
forn(i,n){
    if(a[i]==mexarr+1){
        startidx=i;
        break;}
}
forn(i,n){
    if(a[n-i-1]==mexarr+1){
        endidx=i;
        break;
    }
}
if(startidx!=INT_MIN){
    if(startidx==endidx){

    }
}
//Approach is simple but code is lengthy
// I will search for a subsegment which start with firstmost mex+1 of array and end with endmost mex+1 of array 
// And check if all elements in that segement greater than mex of array if they are then answer is yes otherwise no
// But if mex+1 is only appered once then,replace it with mex and answer is yes
//But if mex+1 is not present in the array and there is any element which is greater than mex of the array then replace it with mex and answer is yes
// else if mext_1 is not present in the array and there is no element which is gretaer than mex of array then it is not [ossible to replace so answer is no
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}