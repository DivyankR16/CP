#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
char s[2][2];
forn(i,2){
    forn(j,2){
        cin>>s[i][j];
    }
}
ll arr[26]={0};
forn(i,2){
    forn(j,2){
        arr[s[i][j]-'a']++;
    }
}
ll count=0;
ll acount=0;
ll bcount=0;
forn(i,26){
    if(arr[i]==2){
        count++;
    }
}
forn(i,26){
    if(arr[i]==3){
        bcount++;
    }
}
forn(i,26){
    if(arr[i]==4){
        acount++;
    }
}
if(count==2){
    cout<<1<<endl;
}
else if(bcount==1){
    cout<<1<<endl;
}
else if(count==1){
    cout<<2<<endl;
}
else if(count==0){
    if(acount==1){
        cout<<0<<endl;
    }
    else{
        cout<<3<<endl;
    }
}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}