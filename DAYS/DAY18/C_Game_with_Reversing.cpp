#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
string a,b;
cin>>a>>b;
ll moves=0;
ll movesreverse=0;
forn(i,n){
    if(a[i]!=b[i])moves++;
}
forn(i,n){
    if(a[i]!=b[n-i-1])movesreverse++;
}
// ll check1=(moves%2==0?2*moves:2*(moves-1)+1);
// ll check2=(moves%2==1?2*movesreverse:2*(movesreverse-1)+1);
ll ck1;
ll ck2;
if(moves%2==0){
    ck1=2*moves;
}
else{
    ck1=2*(moves-1)+1;
}
if(movesreverse%2==0){
    if(movesreverse==0){
        ck2=2;
    }
    else{
    ck2=2*(movesreverse-1)+1;}
}
else{
    ck2=2*movesreverse;
}
// cout<<ck1<<" "<<ck2<<"\n";
cout<<min(ck1,ck2)<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}