#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll i=1;
ll j=n;
bool flag=true;
while(i<=j){
    if(flag){
    cout<<i<<" ";
    i++;}
    else{
        cout<<j<<" ";
        j--;
    }
    flag=!flag;
}
cout<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}