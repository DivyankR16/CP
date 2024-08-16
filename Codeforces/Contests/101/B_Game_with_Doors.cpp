#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll l, r;
    cin >> l >> r;
    ll L, R;
    cin >> L >> R;
    if(l<L){
        if(r<L){
            cout << 1 << "\n";
        }
        else if(r<R){
            cout << r - L + 2 << "\n";
        }
        else if(r==R){
            cout << r - L+1 << "\n";
        }
        else{
            cout << R - L + 2 << "\n";
        }
        return;
    }
    if(l==L){
         if (r < R)
        {
            cout << r - L+1 << "\n";
        }
        else if (r == R)
        {
            cout << r - L << "\n";
        }
        else
        {
            cout << R - L+1 << "\n";
        }
        return;
    }
    if(l>L){
        if (R < l)
        {
            cout << 1 << "\n";
        }
        else if (R < r)
        {
            cout << R - l + 2 << "\n";
        }
        else if (r == R)
        {
            cout << R - l+1 << "\n";
        }
        else
        {
            cout << r - l + 2 << "\n";
        }
        return;
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