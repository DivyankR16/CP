#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll l, r;
    cin >> l >> r;
    if(l==r){
        cout << "Invalid" << "\n";
    }
    else{
        if(l==1){
            cout << "Yes" << "\n";
        }
        else{
            cout << "No" << "\n";
        }
    }
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}