#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll l,r;
cin>>l>>r;
if(r-l+1<3){
    cout<<-1<<endl;
}
else if(r-l+1==3){
    if(l%2==0){
        cout<<l<<" "<<l+1<<" "<<r<<endl;
        return;
    }
    else{
        cout<<-1<<endl;}
}
else{
   if(l%2==0){
    cout<<l<<" "<<l+1<<" "<<l+2<<endl;
   }
   else{
    cout<<l+1<<" "<<l+2<<" "<<l+3<<endl;
   }
}
}
int main(){
solve();
return 0;
}