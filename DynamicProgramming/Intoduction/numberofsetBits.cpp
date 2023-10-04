#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define time__(d) \
    for ( \
        auto blockTime = make_pair(chrono::high_resolution_clock::now(), true); \
        blockTime.second; \
        debug("%s: %lld ms\n", d, chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - blockTime.first).count()), blockTime.second = false \
    )
ll setBitsLogn(ll n){
   ll ans=0;
   while(n){
    ans+=(n%2==1);
    n/=2;
   }
   return ans;
}
void solveNLogNSolution(ll n){
ll total_set_bits=0;
for(ll i=1;i<=n;i++){
  total_set_bits+=setBitsLogn(i);
}
cout<<"Total set bits due to O(NLogN) solution: "<<total_set_bits<<"\n";
}
void solveNSolution(ll n){
 ll dp[n+1];
 dp[0]=0;
 ll total_set_bits=0;
 for(ll i=1;i<=n;i++){
    dp[i]=dp[i/2]+(i%2);
    total_set_bits+=dp[i];
 }
cout<<"Total set bits due to O(N) soluton: "<<total_set_bits<<"\n";
}
int main(){
ll n;
cin>>n;
time__("O(NLogN)"){
solveNLogNSolution(n);
}
time__("O(N)"){
solveNSolution(n);
}
return 0;
}