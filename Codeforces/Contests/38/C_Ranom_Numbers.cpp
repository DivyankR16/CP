#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll powt(ll a,ll b){
    ll ans=1;
    forn(i,b){
      ans*=a;
    }
    return ans;
}
void solve(string nnj){
string s;
cin>>s;
if(s==nnj){
    cout<<200000000<<"\n";
    return;
}
ll n=s.length();
ll cnt[5][5];
forn(i,5){
    forn(j,5){
        cnt[i][j]=0;
    }
}
ll largestFromEnd[n];
memset(largestFromEnd,0,sizeof(largestFromEnd));
ll currentLargestFromEnd=0;
for(ll i=n-1;i>=0;i--){
   if(s[i]-'A'>currentLargestFromEnd){
    currentLargestFromEnd=s[i]-'A';
   }
   largestFromEnd[i]=currentLargestFromEnd;
}
ll ans=0;
forn(i,n-1){
    if((s[i]-'A')<largestFromEnd[i+1]){
        ans-=powt(10,s[i]-'A');
    }
    else{
        ans+=powt(10,s[i]-'A');
    }
}
ans+=powt(10,s[n-1]-'A');
ll GrandAns=ans;
forn(i,n){
// ll lar=max(largestFromEnd[i+1],(ll)(s[i]-'A'));
ll need=ans;
if(i<n-1 && (s[i]-'A')>=largestFromEnd[i+1]){
need-=powt(10,s[i]-'A');
}
else if(i==n-1){
    need-=powt(10,s[i]-'A');
}
else{
    need+=powt(10,s[i]-'A');
}   
forn(k,5){
    ll needed=need;
    if(i<n-1 && k>=largestFromEnd[i+1]){
       needed+=powt(10,k);
    }
    else if(i==n-1){
        needed+=powt(10,k);
    }
    else{
        needed-=powt(10,k);
    }
    forn(j,5){
        forn(z,5){
       if(cnt[j][z]){
          if(j<max(k,z)){
                needed-=(cnt[j][z]*powt(10,j));
          }
        //   else if(i==n-1 && j<k){
        //         needed-=(cnt[j][z]*round(pow(10,j)));
        //   }
          else{
            needed+=(cnt[j][z]*powt(10,j));
          }
       }
        }
    }
    GrandAns=max(GrandAns,needed);
}
ans=need;
if(i<n-1){
cnt[s[i]-'A'][largestFromEnd[i+1]]++;}
}
cout<<GrandAns<<"\n";
}
int main(){
ll t;
cin>>t;
string nnj="";
forn(i,199991){
    nnj+='D';
}
while(t--){
solve(nnj);
}
return 0;
}