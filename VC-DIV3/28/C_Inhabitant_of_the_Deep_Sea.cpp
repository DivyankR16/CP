#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll i = 0;
    ll j = n - 1;
    while(i<j && k){
        if(a[i]<=a[j]){
            if(k>=2*a[i]){
                k -= 2 * a[i];
                a[j] -= a[i];
                a[i] = 0;
                if(a[j]==0){
                    j--;
                }
                i++;
            }
            else if(k==2*a[i]-1){
                k -= 2 * a[i]-1;
                a[j] -= a[i] - 1;
                a[i] = 0;
                i++;
            }
            else{
                k = 0;
            }
        }
        else{
            if(k>=2*a[j]){
                k -= 2 * a[j];
                a[i] -= a[j];
                if(a[i]==0){
                    i++;
                }
                a[j] = 0;
                j--;
            }
            else{
                k = 0;
            }
        }
    }
        if(k){
            if(k>=a[i]){
                // cout << "HOOLA" << "\n";
                cout << n << "\n";
                return;
            }
            cout << n - (j - i + 1) << "\n";
            return;
        }
        cout << n - (j - i + 1) << "\n";
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