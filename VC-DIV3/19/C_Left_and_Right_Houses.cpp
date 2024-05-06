#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll a[n];
    for (ll i = 0; i < n;i++){
        a[i] = s[i] - '0';
    }
    ll dp[n];
    dp[n - 1] = a[n - 1];
    for (ll i = n - 2; i >= 0;i--){
        dp[i] = dp[i + 1] + a[i];
    }
    ll sum = 0;
    ll ans = -1;
    ll diff = INT_MAX;
    for (ll i = -1; i <n;i++){
        if(i==-1){
           if(dp[i+1]>=((n+1)/2)){
                if(abs(n-2*(i+1))<diff){
                    ans = i + 1;
                    diff = abs(n - 2*(i + 1));
                }
           }
        }
        else if(i==n-1){
            if(sum<=((n+1)/2)){
                if (abs(n - 2*(i + 1)) < diff)
                {
                    ans = i + 1;
                    diff = abs(n - 2*(i + 1));
                }
            }
        }
        else{
            sum += a[i];
            if (sum <= ((i+1) / 2))
            {
                if (dp[i + 1]>= ((n -i)/ 2))
                {
                    if (abs(n - 2*(i + 1)) < diff)
                    {
                        ans = i + 1;
                        diff = abs(n - 2*(i + 1));
                    }
                }
            }
        }
    }
    cout << ans << "\n";
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