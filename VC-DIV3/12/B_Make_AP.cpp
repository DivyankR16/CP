#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll a, b, c;
    cin >> a >> b >> c;
    ll a1 = b - (c - b);
    if(a1>=a && a1%a==0){
        cout << "YES"
             << "\n";
        return;
    }
    if((c-a)%2==0){
        ll b1 = a + (c - a) / 2;
        if(b1>=b && b1%b==0){
            cout << "YES"
                 << "\n";
            return;
        }
    }
    ll c1 = b + (b - a);
    if(c1>=c && c1%c==0){
        cout << "YES"
             << "\n";
        return;
    }
    cout << "NO"
         << "\n";
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