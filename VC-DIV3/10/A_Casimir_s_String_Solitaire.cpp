#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string s;
cin >> s;
ll cntA = 0;
ll cntB = 0;
ll cntC = 0;
for(auto i:s){
    if(i=='A')cntA++;
    if(i=='B')cntB++;
    if(i=='C')cntC++;
}
if(cntB==cntA+cntC){
    cout << "YES"
         << "\n";
}
else{
    cout << "NO"
         << "\n";
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