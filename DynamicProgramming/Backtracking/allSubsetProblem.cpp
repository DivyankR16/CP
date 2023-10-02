#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void subSet(ll n,vector<vector<char>>&ans,ll i,string s,vector<char>&temp){
    if(i==n){
      ans.push_back(temp);
      return;
    }
  temp.push_back(s[i]);
  subSet(n,ans,i+1,s,temp);
  temp.pop_back();
  subSet(n,ans,i+1,s,temp);
}
vector<vector<char>> subSetUsingBits(ll n,string s){
    vector<vector<char>>ans;
      ll total_subsets=1<<n;
      for(ll i=0;i<total_subsets;i++){
        vector<char>need;
        for(ll j=0;j<n;j++){
             if(i & (1<<j)){
                need.push_back(s[j]);
             }
        }
        ans.push_back(need);
      }
      return ans;
}
int main(){
string s;
cin>>s;
ll n=s.size();
vector<char>temp;
cout<<"All subsets using recursion-> ";
vector<vector<char>>ansUsingRecursion;
subSet(n,ansUsingRecursion,0,s,temp);
for(auto i:ansUsingRecursion){
    for(auto v:i){
        cout<<v;
    }
    cout<<" ";
}
cout<<"\n";
cout<<"All subsets using bits-> ";
vector<vector<char>>ansUSingBits=subSetUsingBits(n,s);
for(auto i:ansUSingBits){
    for(auto v:i){
        cout<<v;
    }
    cout<<" ";
}
cout<<"\n";
return 0;
}