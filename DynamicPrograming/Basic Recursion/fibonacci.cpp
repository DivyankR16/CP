#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll nth_fibonacci_number(ll n){
    if(n==0 || n==1){
        return n;
    }
    return nth_fibonacci_number(n-1)+nth_fibonacci_number(n-2);
}
void solve(){
ll n;
cin>>n;
cout<<"The "<<n<<"th number in fibonaaci sequence is "<<nth_fibonacci_number(n-1)<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}