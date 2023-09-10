#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void recur(int n,int fbc,int bbc,string &v,vector<string>&ans){
      if(fbc==n && bbc==n){
          ans.push_back(v);
          return;
      }
      if(fbc==bbc){
          v.push_back('(');
          recur(n,fbc+1,bbc,v,ans);
      }
      else{
          if(fbc!=n){
          v.push_back('(');
          recur(n,fbc+1,bbc,v,ans);}
          v.push_back(')');
          recur(n,fbc,bbc+1,v,ans);
      }
}
int main(){
    int n;
    cin>>n;
        vector<string>ans;
        string v="";
        recur(n,0,0,v,ans);
        for(auto i:ans){
            cout<<i<<" ";
        }
        cout<<"\n";
return 0;
}