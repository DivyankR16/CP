#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
// General Backtracking problems
// -> Decesion Problem(Check Feasible)
// -> Optimization Problem(Find best)
// -> Enumeration Problem(Find all)
void IncreasingOrder(ll n,ll st){
    if(st==n+1){
        return;
       }
    cout<<st<<" ";
    IncreasingOrder(n,st+1);                                             
}
void IncreasingOrderUsingBAcktracking(ll n){
    if(n==0){
        return;
       }
    IncreasingOrderUsingBAcktracking(n-1);                                             
    cout<<n<<" ";
}
int main(){
cout<<"n must be atleast 1"<<"\n";
cout<<"Enter value of n: ";
ll n;
cin>>n;
cout<<"Increasing order without Backtraking: ";
IncreasingOrder(n,1);
cout<<"\n";
cout<<"Increasing order with Backtraking: ";
IncreasingOrderUsingBAcktracking(n);
cout<<"\n";
return 0;
}