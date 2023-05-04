#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
sort(a,a+n);
ll i=n-1;
ll sumA=0;
ll sumB=0;
bool dir=true;
while(i>=0){
    if(dir){
    if(a[i]%2==0){
        sumA+=a[i];
    }}
    else{
        if(a[i]%2==1){
            sumB+=a[i];
        }
    }
    dir=!dir;
    i--;
}
if(sumA>sumB){
    cout<<"Alice"<<endl;
}
else if(sumB>sumA){
    cout<<"Bob"<<endl;
}
else{
    cout<<"Tie"<<endl;
}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}