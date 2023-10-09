#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll px, py,ax,ay,bx,by;
    cin >> px >> py;
    cin >> ax >> ay;
    cin >> bx >> by;
    // for ax
    double disa0 = sqrtl((ax) * (ax) + (ay) * (ay));
    double disap = sqrtl((ax - px) * (ax - px) + (ay - py) * (ay - py));
    double ck1 = max(disa0, disap);
    // for bx
    double disb0 = sqrtl((bx) * (bx) + (by) * (by));
    double disbp = sqrtl((bx - px) * (bx - px) + (by - py) * (by - py));
    double ck2 = max(disb0, disbp);
    //for ax and bx
    double disab = sqrtl((ax - bx) * (ax - bx) + (ay - by) * (ay - by));
    double val = max(min(disa0, disb0), min(disap, disbp));
    double ck3 = max(val,disab / (double)2);
    cout <<fixed<<setprecision(10)<<min({ck1, ck2, ck3})<<"\n";
    // cout <<fixed<<setprecision(10)<<ck1<<"\n";
    // cout <<fixed<<setprecision(10)<<ck2<<"\n";
    // cout <<fixed<<setprecision(10)<<ck3<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}