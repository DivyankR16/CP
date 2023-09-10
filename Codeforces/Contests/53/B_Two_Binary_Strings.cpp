#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string a,b;
cin>>a>>b;
ll n=a.length();
forn(i,n-1){
    if(a[i]=='0' && a[i]==b[i] && a[i+1]==b[i+1] && a[i+1]=='1'){
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