#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    vector<ll> ans(n,0);
    forn(i,n){
        ans[i] = i + 1;
    }
    if(n==3){
        swap(ans[n - 1], ans[n - 2]);
        forn(i, n)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
        swap(ans[n - 1], ans[n - 2]);
        reverse(ans.begin(), ans.end());
        forn(i,n){
            cout << ans[i] << " ";
        }
        cout << "\n";
        swap(ans[0], ans[1]);
        forn(i, n)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
        return;
    }
    swap(ans[0], ans[2]);
    forn(j, n)
    {
        cout << ans[j] << " ";
    }
    cout << "\n";
    swap(ans[0], ans[2]);
    reverse(ans.begin(), ans.end());
    forn(i,n-1){

       if(i){
           swap(ans[n - i - 1], ans[n - i - 2]);
           forn(j, n)
           {
               cout << ans[j] << " ";
           }
           cout << "\n";
       }
       else{
           forn(j, n)
           {
               cout << ans[j] << " ";
           }
           cout << "\n";
       }
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