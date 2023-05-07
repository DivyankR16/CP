#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
 string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        n-=1;
        string s="1";
        while(n>0){
        string newstr="";
          int ln=s.length();
          int i=0;
          while(i<ln){
          int cnt=1;
          char b=s[i];
          while(i<(ln-1) && s[i]==s[i+1]){
            cnt++;
            i++;
          }
          char a=cnt+'0';
           newstr+=a;
           newstr+=b;
           if(b==s[i])i++;
          }
         s=newstr;
         n--;
        }
        return s;
    }
int main(){
int n;
cin>>n;
cout<<countAndSay(n)<<"\n";
return 0;
}