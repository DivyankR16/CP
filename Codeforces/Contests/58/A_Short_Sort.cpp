#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string s;
cin>>s;
forn(i,s.size()){
    if(i==0){
        if(s[i]=='a'){
            cout<<"YES"<<"\n";
            return;
        }
    }
    else if(i==1){
        if(s[i]=='b'){
             cout<<"YES"<<"\n";
            return;
        }
    }
    else{
        if(s[i]=='c'){
             cout<<"YES"<<"\n";
            return;
        }
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