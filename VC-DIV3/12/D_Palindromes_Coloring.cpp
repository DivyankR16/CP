#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll cnt[26];
    memset(cnt, 0, sizeof(cnt));
    forn(i,n){
        cnt[s[i] - 'a']++;
    }
    ll pairs = 0;
    ll extra = 0;
    for (ll i = 0; i < 26;i++){
        pairs += cnt[i] / 2;
        extra += cnt[i] % 2;
    }
    ll l = 1;
    ll r = n;
    ll ans = 1;
    while(l<=r){
        bool poss = true;
        ll mid = l + (r - l) / 2;
        ll cur_pairs = pairs;
        ll cur_extra = extra;
        for (ll i = 0; i< k;i++){
            if(mid%2==0){
                if(cur_pairs>=(mid/2)){
                cur_pairs -= (mid / 2);
                }
                else{
                    poss = false;
                    break;
                }
            }
            else{
                if(cur_pairs>=(mid-1)/2){
                    cur_pairs -= (mid - 1) / 2;
                    if(cur_extra>=1){
                        cur_extra -= 1;
                    }
                    else{
                        if(cur_pairs>=1){
                            cur_pairs -= 1;
                            cur_extra += 1;
                        }
                        else{
                            poss = false;
                            break;
                        }
                    }
                }
                else{
                    poss = false;
                    break;
                }
            }
        }
            if (poss)
            {
                ans = mid;
                l = mid + 1;
            }
            else{
            r = mid - 1;
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