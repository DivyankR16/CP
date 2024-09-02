#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll a,b;
    cin>>a>>b;
    if(abs(a-b)==0){
        cout << 1 << "\n";
        return;
    }
    if(abs(a-b-1)%2==1){
        cout << 3 << "\n";
    }
    else{
        cout << 2 << "\n";
    }
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}