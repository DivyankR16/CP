#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m;
    cin >> n >> m;
    ll N = n + m + 1;
    ll a[N], b[N];
    forn(i, N) cin >> a[i];
    forn(i, N) cin >> b[i];
    ll valexP_P = 0;
    ll valexP_T = 0;
    ll valexT_P = 0;
    ll valexT_T = 0;
    ll prog = n + 1;
    ll test = m;
    vector<bool> f(N, 0);
    for (ll i = 0; i < N;i++){
        if(a[i]>b[i]){
            if(prog){
                valexP_P += a[i];
                f[i] = 1;
                prog--;
            }
            else{
                valexP_T += b[i];
                test--;
            }
        }
        else{
            if(a[i]<b[i]){
                if(test){
                    valexP_T += b[i];
                    test--;
                }
                else{
                    valexP_P += a[i];
                    prog--;
                    f[i] = 1;
                }
            }
        }
    }
    prog = n;
    test = m+1;
    for (ll i = 0; i < N; i++)
    {
        if (a[i] > b[i])
        {
            if (prog)
            {
                valexT_P += a[i];
                prog--;
                f[i] = 1;
            }
            else
            {
                valexT_T += b[i];
                test--;
                f[i] = 0;
            }
        }
        else
        {
            if (a[i] < b[i])
            {
                if (test)
                {
                    valexT_T += b[i];
                    test--;
                    f[i] = 0;
                }
                else
                {
                    valexT_P += a[i];
                    prog--;
                    f[i] = 1;
                }
            }
        }
    }
    for (ll i = 0; i < N;i++){

        if(!f[i]){
            cout << valexT_T - b[i] + valexT_P << " ";
        }
        else{
            cout << valexP_P - a[i] + valexP_T << " ";
        }
    }
    cout << "\n";
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