#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, r, b;
    cin >> n >> r>> b;
    if(r==b){
        forn(i,r){
            cout << 'RB';
        }
        cout << "\n";
    }
    else{
        char need = 'R';
        char no = 'B';
        if(b>r){
            need = 'B';
            no = 'R';
        }
        ll val = min(b, r);
        ll cntD = max(b, r) / (val + 1);
        ll extra = max(b, r) % (val + 1);
        val++;
        while(val){
            forn(i,cntD){
                cout << need;
            }
            if(extra){
                cout << need;
                extra--;
            }
            if(val>1){
            cout << no;}
            val--;
        }
        cout << "\n";
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