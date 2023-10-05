#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
string s;
cin>>s;
if(n==1){
    if(k){
    cout<<"0"<<"\n";
    }
    else{
        cout<<s<<"\n";
    }
    return;
}
forn(i,n){
    if(!i){
        if(s[i]!='1' && k){
        s[i]='1';
        k--;}
    }
    else{
        if(s[i]!='0' && k){
            s[i]='0';
            k--;
        }
    }
}
cout<<s<<"\n";
}
int main(){
solve();
return 0;
}