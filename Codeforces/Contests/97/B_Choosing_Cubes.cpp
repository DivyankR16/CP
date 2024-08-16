#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, f, k;
    cin >> n >> f >> k;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll num = a[f - 1];
    sort(a, a + n, greater<int>());
    if(a[k-1]>num){
        cout << "NO" << "\n";
    }
    else{
        if(a[k-1]<num){
            cout << "YES" << "\n";
        }
        else{
            if(k<n && a[k]==num){
                cout << "MAYBE" << "\n";
            }
            else{
                cout << "YES" << "\n";
            }
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