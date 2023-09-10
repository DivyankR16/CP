#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
string s;
cin>>s;
ll val1=0;
ll val2=0;
bool ans=true;
string p1="";
string p2="";
forn(i,n){
    if(!val1 && !val2){
        if(s[i]=='0'){
            ans=false;
            break;
        }
        else{
          p1+='(';
          p2+='(';
          val1++;
          val2++;
        }
    }
    else{
        if(val1==0 || val2==0){
            if(s[i]=='1'){
                p1+='(';
                p2+='(';
                val1++;
                val2++;
            }
            else{
                if(!val1){
                    p1+='(';
                    p2+=')';
                    val1++;
                    val2--;
                }
                else{
                    p1+=')';
                    p2+='(';
                    val1--;
                    val2++;

                }
            }
        }
        else{
            if(s[i]=='1'){
                p1+=')';
                p2+=')';
                val1--;
                val2--;
            }
            else{
                if(val1>val2){
                    p1+=')';
                    p2+='(';
                    val1--;
                    val2++;
                }
                else{
                    p1+='(';
                    p2+=')';
                    val1++;
                    val2--;
                }
            }
        }
    }
}
if(ans && (val1==0 && val2==0)){
    cout<<"YES"<<"\n";
    cout<<p1<<"\n";
    cout<<p2<<"\n";
}
else{
    cout<<"NO"<<"\n";
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