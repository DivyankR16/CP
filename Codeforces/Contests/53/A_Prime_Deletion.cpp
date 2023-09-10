#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string s;
cin>>s;
ll n=s.length();
ll idx1=0;
ll idx2=0;
forn(i,n){
    if(s[i]=='7'){
       idx1=i;
    }
    if(s[i]=='3'){
        idx2=i;
    }
}
if(idx1>idx2){
    cout<<37<<"\n";
}
else{
    cout<<73<<"\n";
}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}