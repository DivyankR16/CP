#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
string s;
cin>>s;
if(n%2==1){
    cout<<-1<<"\n";
    return;
}
ll cnt[26];
memset(cnt,0,sizeof(cnt));
forn(i,n){
    cnt[s[i]-'a']++;
}
forn(i,26){
    if(cnt[i]>n/2){
        cout<<-1<<"\n";
        return;
    }
}
ll pairs=0;
ll cnt_pairs[26];
memset(cnt_pairs,0,sizeof(cnt_pairs));
for(ll i=0;i<n/2;i++){
    if(s[i]==s[n-1-i]){pairs++;
    cnt_pairs[s[i]-'a']++;
    }
}
forn(i,26){
    if(cnt_pairs[i]*2>=pairs){
       cout<<cnt_pairs[i]<<"\n";
       return;
    }
}
cout<<(pairs+1)/2<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}