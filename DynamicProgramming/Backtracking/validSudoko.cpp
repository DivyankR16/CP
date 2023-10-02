#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        for(int i=0;i<n;i++){
            unordered_set<char>s;
            unordered_set<char>s1;
            unordered_set<char>s2;
            for(int j=0;j<n;j++){
                if(board[i][j]!='.'){
               if(s.find(board[i][j])!=s.end()){
                   return false;
               }
               s.insert(board[i][j]);
                }
            }
            for(int j=0;j<n;j++){
                if(board[j][i]!='.'){
                if(s1.find(board[j][i])!=s1.end()){
                    return false;
                }
                s1.insert(board[j][i]);
                }
            }
          for(int j=0;j<n;j++){
              if(board[(i/3)*3+j/3][(i%3)*3+j%3]!='.'){
              if(s2.find(board[(i/3)*3+j/3][(i%3)*3+j%3])!=s2.end()){
                  return false;
              }
              s2.insert(board[(i/3)*3+j/3][(i%3)*3+j%3]);
              }
          }
        }
        return true;
    }
int main(){
//Function not called
return 0;
}