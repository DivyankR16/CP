#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll x;
    cin>>x;
    if(x%400==0){
        cout << 366 << "\n";
        return;
    }
    if (x %100 == 0)
    {
        cout << 365 << "\n";
        return;
    }
    if(x%4==0){
        cout << 366 << "\n";
        return;
    }
    cout << 365 << "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}