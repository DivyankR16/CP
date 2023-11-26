#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll a, b, c;
    cin >> a >> b >> c;
    ll ans[3];
    ans[0] = 0;
    ans[1] = 0;
    ans[2] = 0;
    if(b==c){
        ans[0] = 1;
    }
    else{
        ll diff = abs(b - c);
        if(diff%2==0){
                ans[0] = 1;
        }
    }
    if (a == c)
    {
        ans[1] = 1;
    }
    else
    {
        ll diff = abs(a - c);
        if (diff % 2 == 0)
        {
                ans[1] = 1;
        }
    }
    if (b == a)
    {
        ans[2] = 1;
    }
    else
    {
        ll diff = abs(b - a);
        if (diff % 2 == 0)
        {
                ans[2] = 1;
        }
    }
    forn(i,3){
        cout << ans[i] << " ";
    }
    cout << '\n';
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}