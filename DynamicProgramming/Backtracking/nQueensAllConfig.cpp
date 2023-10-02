#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
    bool canPlaced(vector<string>&temp,int currentlevel,int col,int n){
        for(int i=0;i<n;i++){
            if(temp[i][col]=='Q'){
                return false;
            }
        }
        int i=currentlevel;
        int j=col;
        while(i>=0 && j>=0){
            if(temp[i][j]=='Q'){
                return false;
            }
            i--;
            j--;
        }
        i=currentlevel;
        j=col;
        while(i>=0 && j<n){
            if(temp[i][j]=='Q'){
                return false;
            }
            i--;
            j++;
        }
        return true;
    }
    void nQueens(vector<vector<string>>&ans,vector<string>&temp,int n,int currentlevel){
        if(currentlevel==n){
            ans.push_back(temp);
            return;
        }
        for(int col=0;col<n;col++){
            if(canPlaced(temp,currentlevel,col,n)){
                temp[currentlevel][col]='Q';
                nQueens(ans,temp,n,currentlevel+1);
            temp[currentlevel][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>temp(n,string(n,'.'));
        nQueens(ans,temp,n,0);
        return ans;
    }
int main(){
ll n;
cin>>n;
vector<vector<string>>ans=solveNQueens(n);
ll cnt=1;
for(auto i:ans){
    cout<<"Configuration "<<cnt++<<"\n";
    for(auto s:i){
        cout<<s<<"\n";
    }
}
return 0;
}