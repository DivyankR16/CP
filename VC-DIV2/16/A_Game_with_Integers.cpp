#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin >> n;
if(n%3==0){
    cout << "Second"
         << "\n";
}
else{
    cout << "First"
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