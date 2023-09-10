#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define time__(d) \
    for ( \
        auto blockTime = make_pair(chrono::high_resolution_clock::now(), true); \
        blockTime.second; \
        debug("%s: %lld ms\n", d, chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - blockTime.first).count()), blockTime.second = false \
    )
void solve(){
ll n;
cin>>n;
ll rows=1500;
vector<ll>dp[rows];
ll idx=0;
while(idx<rows){
        dp[idx].assign(idx+1,0);
        idx++;
}
idx=0;
ll cnt=1;
ll rowhit=-1;
bool isfromleftend=true;
ll indx=-1;
while(idx<rows){
    dp[idx][0]=cnt*cnt;
    if(cnt==n){
       rowhit=idx;
       ll val;
                if((idx+1)%2==0){
                    val=(idx+1)/2;
                }
                else{
                    val=(idx+1)/2+1;
                }
                   if((0+1)<=val){
                      indx=0;
                   }
                   else{
                    isfromleftend=false;
                    indx=idx-0;
                   }
    }
    cnt++;
    for(ll j=1;j<=idx;j++){
        if(j){
            dp[idx][j]+=dp[idx][j-1]+cnt*cnt;
            if(cnt==n){
                rowhit=idx;
                ll val;
                if((idx+1)%2==0){
                    val=(idx+1)/2;
                }
                else{
                    val=(idx+1)/2+1;
                }
                   if((j+1)<=val){
                      indx=j;
                   }
                   else{
                    isfromleftend=false;
                    indx=idx-j;
                   }
            }
            cnt++;
        }
    }
    idx++;
}
ll ans=0;
forn(i,indx+1){
    ans+=dp[i][dp[i].size()-1];
}
ll index=indx+1;
ll left=0;
while(index+indx<=rowhit){
    if(isfromleftend){
        ans+=dp[index][indx];
    }
    else{
        ans+=dp[index][dp[index].size()-1]-dp[index][dp[index].size()-1-indx-1];
    }
    index++;
}
ll need=0;
while(index<=rowhit){
    if(isfromleftend){
        ans+=dp[index][indx]-dp[index][need];
    }
    else{
        ans+=dp[index][dp[index].size()-1-need-1]-dp[index][dp[index].size()-1-indx-1];
    }
    need++;
    index++;
}
cout<<ans<<"\n";
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
time__("Solve"){
solve();
}
}
return 0;
}