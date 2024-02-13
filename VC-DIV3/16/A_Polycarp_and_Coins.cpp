#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin >> n;
if(n%3==0){
    cout << n / 3 <<" "<< n / 3 << "\n";
}
else{
    if(n%3==1){
        cout << n / 3 + 1 << " " << n / 3 << "\n";
    }
    else{
        cout << n / 3 << " " << n / 3 + 1 << "\n";
    }
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