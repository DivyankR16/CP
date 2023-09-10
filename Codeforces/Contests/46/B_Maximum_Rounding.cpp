#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string s;
cin>>s;
ll n=s.size();
ll pos=INT_MIN;
forn(i,n){
    if(s[i]-'0'>=5){pos=i;break;}
}
if(pos==INT_MIN){
    cout<<s<<"\n";
}
else{
    ll i=pos;
    while(i>=0 && (s[i]=='4' || s[i]-'0'>=5)){
        i--;
    }
    if(i==-1){
         cout<<1;
         forn(i,n){
            cout<<0;
         }
         cout<<"\n";
    }
    else{
        forn(j,i){
            cout<<s[j];
        }
        cout<<++s[i];
        for(ll j=i+1;j<n;j++){
            cout<<0;
        }
        cout<<"\n";
    }
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