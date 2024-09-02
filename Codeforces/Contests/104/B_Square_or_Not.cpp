#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll l = 0;
    ll r = 1e5;
    ll ans = -1;
    while(l<=r){
        ll m = l + (r - l) / 2;
        if(m*m==n){
            ans = m;
            break;
        }
        else if(m*m>n){
            r = m - 1;
        }
        else{
            l = m + 1;
        }
    }
    if(ans==-1){
        cout << "No" << "\n";
    }
    else{
        // ll r = 0;
        // ll i = 0;
        // while(r<ans){
        //     ll f = i + ans;
        //     while(i<f){
        //         if(!r || r==ans-1){
        //             if(s[i]==0){
        //                 cout << "No" << "\n";
        //                 return;
        //             }
        //         }
        //         else{
        //             if(i%ans==0){
        //                 if(s[i]==0){
        //                     cout << "No" << '\n';
        //                     return;
        //                 }
        //             }
        //             else{
        //                 if(s[i]==1){
        //                     cout << "No" << "\n";
        //                     return;
        //                 }
        //             }
        //         }
        //         i++;
        //     }
        //     r++;
        // }
        // cout << "Yes" << '\n';
        // for (ll i = 0; i < ans;i++){
        //     for (ll j = 0; j < ans;j++){
        //         cout << s[i * ans + j] << " ";
        //     }
        // }
        for (ll i = 0; i < ans; i++)
        {
            if (i==0 || i == ans - 1)
            {
                for (ll j = 0; j < ans; j++)
                {
                    ll idx = i * ans + j;
                    if (s[idx] == '0')
                    {
                        cout << "No" << "\n";
                        return;
                    }
                }
            }
            else
            {
                for (ll j = 0; j < ans; j++)
                {
                    ll idx = i * ans+j;
                    if(j==0 || j==ans-1){
                        if(s[idx]=='0'){
                            cout << "No" << "\n";
                            return;
                        }
                    }
                    else{
                        // cout << idx << "\n";
                        if (s[idx] == '1')
                        {
                            cout << "No" << "\n";
                            return;
                        }
                    }
                }
            }
        }
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