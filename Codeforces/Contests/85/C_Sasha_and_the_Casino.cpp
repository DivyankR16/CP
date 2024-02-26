#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll k, x, a;
    cin >> k >> x >> a;
    ll help = 0;
    while(x--){
        ll need = (help + k - 1) / (k - 1);
        if((help+k-1)%(k-1)!=0 && (help+k-1)<(k-1)){
            need = 1;
        }
        else{
            need = (help + k - 1) / (k - 1);
        }
        help += need;
        if(help>a){
            break;
        }
    }
    if(k*a<=k*help+a){
        cout << "NO"
             << "\n";
    }
    else{
        cout << "YES"
             << "\n";
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