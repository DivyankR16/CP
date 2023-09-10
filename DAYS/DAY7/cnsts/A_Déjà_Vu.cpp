#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string s;
cin>>s;
ll n=s.size();
bool ans=false;
forn(i,n/2){
    if(s[i]!='a'){
       cout<<"Yes"<<"\n";
       ll k=0;
       while(i<=n-1-i){
        cout<<s[i];
        i++;
       }
       cout<<'a';
       i++;
       while(i<n){
        cout<<s[i];
        i++;
       }
       break;
       cout<<"\n";
    }
}
if(!ans){
    cout<<"No"<<"\n";
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