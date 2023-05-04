#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void swap(ll *x,ll *y){
    ll temp=*x;
    *x=*y;
    *y=temp;
}
void solve(){
ll n,x,y;
cin>>n>>x>>y;
if((x==0 && y==0) || (x!=0 && y!=0)){
    cout<<-1<<endl;
    return;
}
if(x<y){
    swap(x,y);
}
if((n-1)%x==0){
ll z=1;ll cnt=0;
forn(i,n-1){
    if(x==cnt){
        cnt=0;
        if(z==1){
        z+=(x+1);}
        else{z+=(x);}
        }
        cnt++;
        cout<<z<<" ";
    }
    cout<<endl;
}
else{
    cout<<-1<<endl;
    return;
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