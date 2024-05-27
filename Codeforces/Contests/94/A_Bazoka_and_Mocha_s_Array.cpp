#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    forn(i,n)cin>>a[i];
    ll cnt=0;
        for (ll i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1]){
                cnt++;
            }
        }
    if(cnt>=2){
        cout << "No" << "\n";
    }
    else if(cnt==1){
        if(a[n-1]<=a[0]){
        cout << "Yes" << "\n";
        }
        else{
            cout << "No" << "\n";
        }
    }
    else{
        cout << "Yes" << "\n";
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