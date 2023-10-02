#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll fact(ll n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);           // n*(n-1)*(n-2)..1
}
void solve(){
ll n;
cin>>n;
cout<<"The Factorial of "<<n<<" is "<<fact(n)<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}