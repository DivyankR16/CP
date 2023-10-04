#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll>memo;
ll fib(ll n){
    if(n<=2){
        return 1;
    }
    if(memo[n]!=-1)return memo[n];
    return memo[n]=fib(n-1)+fib(n-2);
}
int main(){
    ll n;
    cin>>n;
    memo.resize(n+1,-1);
   cout<<"Fibonacci number: "<<fib(n)<<"\n";
return 0;
}