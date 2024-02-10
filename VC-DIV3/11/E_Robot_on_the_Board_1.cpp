#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    ll sz = s.size();
    // ll prex[sz];
    // ll prey[sz];
    // for (ll i = 0; i < sz;i++){
    //        if(s[i]=='L' || s[i]=='R'){
    //            prex[i] = (s[i] == 'L' ? -1 : 1);
    //            prey[i] = 0;
    //        }
    //        else{
    //            prey[i] = (s[i] == 'U' ? -1 : 1);
    //            prex[i] = 0;
    //        }
    //        if(i){
    //            prey[i] += prey[i - 1];
    //            prex[i] += prex[i - 1];
    //        }
    // }
    ll ix = 0;
    ll iy = 0;
    ll fx = 0;
    ll fy = 0;
    ll curx = 0;
    ll cury = 0;
    forn(i,sz){
        if(s[i]=='R'){
            curx++;
            fx = max(fx, curx);
            if(fx-ix>=m){
                fx--;
                break;
            }
        }
        if(s[i]=='L'){
            curx--;
            ix = min(ix, curx);
            if (fx - ix >= m)
            {
                ix++;
                break;
            }
        }
        if(s[i]=='U'){
            cury--;
            iy = min(iy, cury);
            if (fy - iy >= n)
            {
                iy++;
                break;
            }
        }
        if(s[i]=='D'){
            cury++;
            fy = max(fy, cury);
            if (fy - iy >= n)
            {
                fy--;
                break;
            }
        }
    }
    cout << 1-iy <<" "<< 1-ix << "\n";
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