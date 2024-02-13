#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin >> n;
if(n<=28){
    cout << "aa" << (char)((n - 3)+'a') << "\n";
}
else if(n<=53){
    n -= 26;
    cout << "a" << (char)('a'+(n - 2)) << "z"
         << "\n";
    }
    else{
        n -= 52;
        cout << (char)(n-1 + 'a') << "zz"
             << "\n";
    }
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}