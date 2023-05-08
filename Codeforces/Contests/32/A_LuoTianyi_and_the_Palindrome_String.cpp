#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string s;
cin>>s;
ll n=s.length();
bool check=false;
forn(i,n-1){
    if(s[i]!=s[i+1]){
        check=true;
        break;
    }
}
if(!check){
    cout<<-1<<"\n";
}
else{
    cout<<n-1<<"\n";
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