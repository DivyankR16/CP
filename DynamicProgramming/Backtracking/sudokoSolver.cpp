#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
bool ispossible(vector<vector<char>>&board,int row,int col,char c,int n){
       for(int i=0;i<n;i++){
           if(board[i][col]==c){
               return false;
           }
           if(board[row][i]==c){
               return false;
           }
           if(board[(row/3)*3+i/3][(col/3)*3+i%3]==c){
               return false;
           }
       }
       return true;
}
bool solve(vector<vector<char>>&board,int row,int col,int n,vector<vector<char>>&cur){
    if(row==n){
        cur=board;
        for(auto i:board){
            for(auto c:i){
                cout<<c;
            }
            cout<<"\n";
        }
        return true;
    }
    if(col==n){
        return solve(board,row+1,0,n,cur);
    }
    if(board[row][col]!='.'){
        return solve(board,row,col+1,n,cur);
    }
    for(char i='1';i<='9';i++){
        if(ispossible(board,row,col,i,n)){
            board[row][col]=i;
            bool flag=solve(board,row,col+1,n,cur);
            if(flag){
                return true;
            }
        }
    }
    board[row][col]='.';
    return false;
}
    void solveSudoku(vector<vector<char>>& board) {
        int n=board.size();
        vector<vector<char>>cur;
        bool val=solve(board,0,0,n,cur);
        cout<<val<<"\n";
        board=cur;
    }
int main(){
//Function is not called but works fine after calling
return 0;
}