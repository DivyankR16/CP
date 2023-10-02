#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void helper(vector<string>&s,int fbc,int bbc,int n,string &temp){
        if(fbc==n && bbc==n){
            s.push_back(temp);
            return;
        }
        if(fbc<n){
          temp+='(';
          helper(s,fbc+1,bbc,n,temp);
          temp.pop_back();
        }
        if(bbc<fbc){
            temp+=')';
            helper(s,fbc,bbc+1,n,temp);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>s;
        string temp="";
        helper(s,0,0,n,temp);
        return s;
    }
int main(){
ll n;
cin>>n;
cout<<"Generated paranthesis are:-> "<<"\n";
for(auto i:generateParenthesis(n)){
    cout<<i<<"\n";
}
return 0;
}