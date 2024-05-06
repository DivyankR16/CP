#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, a, b;
    cin >> n >> a >> b;
    ll cost = 0;
    if(2*a>b){
        cost += (n / 2) * b;
        if(n%2==1){
            cost += a;
        }
    }
    else{
        cost += n * a;
    }
    cout << cost << "\n";
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