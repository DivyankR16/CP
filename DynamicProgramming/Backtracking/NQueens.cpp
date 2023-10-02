#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
bool canPlaced(vector<string>&temp,int currentlevel, int col, int n){
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
    int nQueens(vector<string>&temp,int currentlevel,int n){
        if(currentlevel==n){
            return 1;
        }
        int ans=0;
        for(int col=0;col<n;col++){
            if(canPlaced(temp,currentlevel,col,n)){
                temp[currentlevel][col]='Q';
               ans+= nQueens(temp,currentlevel+1,n);
                temp[currentlevel][col]='.';
            }
        }
        return ans;
    }
    int totalNQueens(int n) {
        vector<string>temp(n,string(n,'.'));
        return nQueens(temp,n,0);
    }
int main(){
ll n;
cin>>n;
cout<<"Ways: "<<totalNQueens(n)<<"\n";
return 0;
}