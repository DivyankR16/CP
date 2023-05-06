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
ll cnt=0;
ll maxval;
ll mexarr=INT_MIN;
for(auto i:s){
    if(i!=cnt){
      mexarr=cnt;
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
        endidx=n-i-1;
        break;
    }
}
// cout<<startidx<<" "<<endidx<<"\n";
if(startidx!=INT_MIN){
    if(startidx==endidx){
       cout<<"Yes"<<"\n";
    }
    else{
        map<ll,ll>map;
        forn(i,n){
            if(i<startidx || i>endidx){
                map[a[i]]++;
            }
        }
        for(ll i=startidx;i<=endidx;i++){
            if(a[i]<mexarr && !map[a[i]]){
                cout<<"No"<<"\n";
                return;
            }
        }
        cout<<"Yes"<<"\n";
    }
}
else{
map<ll,ll>map;
forn(i,n){
    map[a[i]]++;
}
forn(i,n){
    if(a[i]>mexarr || map[a[i]]>1){
        cout<<"Yes"<<"\n";
        return;
    }
}
cout<<"No"<<"\n";
}
//Approach is simple but code is lengthy
// I will search for a subsegment which start with firstmost mex+1 of array and end with endmost mex+1 of array 
// And check if all elements in that segement greater than mex of array if they are then answer is yes otherwise no
// But if mex+1 is only appered once then,replace it with mex and answer is yes
//But if mex+1 is not present in the array and there is any element which is greater than mex of the array then replace it with mex and answer is yes
// else if mext_1 is not present in the array and there is no element which is gretaer than mex of array then it is not possible to replace so answer is no
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}