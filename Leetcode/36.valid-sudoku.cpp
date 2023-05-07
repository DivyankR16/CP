/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */

// @lc code=start
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int k=0;k<=6;k+=3){
        for(int r=0;r<=6;r+=3){
            unordered_map<char,int>mp1;
            for(int i=k;i<k+3;i++){
                for(int j=r;j<r+3;j++){
                    if(mp1[board[i][j]]>=1 && board[i][j]!='.'){
                        return false;
                    }
                    
                   mp1[board[i][j]]++;
                }
            }
            // unordered_map<char,int>mp2;
            // for(int i=0;i<3;i++){
            //     for(int j=k;j<k+3;j++){
            //         if(mp2[board[i][j]]>=1 && board[i][j]!='.'){
            //             return false;
            //         }
            //        mp2[board[i][j]]++;
            //     }
            // }
        }
        }
        for(int k=0;k<9;k++){
            unordered_map<char,int>mp1;
            for(int i=0;i<9;i++){
                if(mp1[board[k][i]]>=1 && board[k][i]!='.'){
                    return false;
                }
               mp1[board[k][i]]++;
            }
            unordered_map<char,int>mp2;
            for(int i=0;i<9;i++){
                if(mp2[board[i][k]]>=1 && board[i][k]!='.'){
                    return false;
                }
                mp2[board[i][k]]++;
            }
        }
        return true;
    }
};
// @lc code=end

