#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n];
    forn(i, n) cin >> a[i];
    // ll l = 0;
    // ll r = n - 1;
    // ll sank = 0;
    // bool fst = true;
    // while(l<r){
    //     if (fst){
    //        if((k+1)/2>=a[l]){
    //            ll fk = 2 * a[l] - 1;
    //            k -= fk;
    //            ll vall = a[l];
    //            ll valr = a[r];
    //            a[l] = 0;
    //            bool ko = false;
    //            if(a[r]<=(fk/2)){
    //                fk -= a[r];
    //                a[r] = 0;
    //            }
    //            else{
    //            a[r] -= fk / 2;
    //            ko = true;
    //            }
    //            fk -= vall;
    //            if(ko){
    //                fk = 0;
    //            }
    //            if(a[l]==0){
    //                l++;
    //                sank++;
    //            }
    //            if(a[r]==0){
    //                r--;
    //                sank++;
    //            }
    //            fst = !fst;
    //        }
    //        else{
    //            break;
    //        }
    //     }
    //     else{
    //         if ((k + 1) / 2 >= a[r])
    //         {
    //             ll fk = 2 * a[r] - 1;
    //             ll vall = a[l];
    //             ll valr = a[r];
    //             a[r] = 0;
    //             bool ko = false;
    //             if(a[l]<=(fk/2)){
    //                 fk -= a[l];
    //                 a[l] = 0;
    //             }
    //             else{
    //             a[l] -= fk/2;
    //             ko = true;
    //             }
    //             fk -= valr;
    //             if(ko){
    //                 fk = 0;
    //             }
    //             if (a[l] == 0)
    //             {
    //                 l++;
    //                 sank++;
    //             }
    //             if (a[r] == 0)
    //             {
    //                 r--;
    //                 sank++;
    //             }
    //             fst = !fst;
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    // }
    // if(l==r){
    //     a[l] -= k;
    //     if(a[l]<=0){
    //         sank++;
    //     }
    // }
    // cout << sank << "\n";
    ll fs = 0;
    ll ss = 0;
    ll ta = 2 * k;
    for (ll i = 0; i < n;i++){
        if(ta<=0)
            break;
        fs += min(a[i], ta / 2);
        ta -= 2*min(a[i], ta / 2);
    }
    if(ta){
        ss = min(ta / 2, a[n - 1]);
    }
    cout << fs + ss << "\n";
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