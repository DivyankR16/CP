#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    ll f = n - k + 1;
    ll len = n - f + 1;
    if(f==n){
        if(f%2==0){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
        return;
    }
    if(len%2==0){
        if((len/2)%2==0){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
    else{
        if(n%2==1){
            if(((len/2)+1)%2==0){
                cout << "YES" << "\n";
            }
            else{
                cout << "NO" << "\n";
            }
        }
        else{
            if ((len / 2) % 2 == 0)
            {
                cout << "YES" << "\n";
            }
            else
            {
                cout << "NO" << "\n";
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