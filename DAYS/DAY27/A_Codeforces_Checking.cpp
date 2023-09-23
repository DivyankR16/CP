#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
char c;
cin>>c;
string s="codeforces";
ll n=s.size();
forn(i,n){
    if(s[i]==c){
        cout<<"YES"<<"\n";
        return;
    }
}
cout<<"NO"<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}