#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string s;
cin >> s;
ll pos;
cin >> pos;
ll n = s.size();
vector<bool> skip(n, 0);
pos--;
ll sz = n - 1;
ll itr = 0;
ll skipidx = 0;
bool isforward = true;
ll fk = 0;
while(pos-(sz-itr)>=1 && fk<n){
    if(skipidx>=n){
        skipidx = n - 1;
        isforward = false;
    }
    if(isforward){
    while(skipidx<n-1 && s[skipidx]<s[skipidx+1]){
        skipidx++;
    }
    skip[skipidx] = 1;
    pos -= (sz - itr+1);
    itr++;
    skipidx++;
    }
    else{
        while(skipidx>=0 && skip[skipidx]==1){
        skipidx--;
        }
        skip[skipidx] = 1;
        itr++;
        skipidx--;
    }
    fk++;
}
ll cnt = 0;
cout << pos << "\n";
forn(i,n){
    if(skip[i]==0){
        cnt++;
        if(cnt-1==pos){
        cout << s[i]<<"\n";
        break;
        }
    }
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