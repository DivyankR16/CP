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
            map<char,int>mp1;
            for(int i=k;i<k+3;i++){
                for(int j=0;j<3;j++){
                    if(mp1[board[i][j]]>=1){
                        return false;
                    }
                   mp1[board[i][j]]++;
                }
            }
            map<char,int>mp2;
            for(int i=0;i<3;i++){
                for(int j=k;j<k+3;j++){
                    if(mp2[board[i][j]]>=1){
                        return false;
                    }
                   mp2[board[i][j]]++;
                }
            }
        }
        for(int k=0;k<9;k++){
            map<char,int>mp1;
            for(int i=0;i<0;i++){
               mp1[board[k][i]]++;
            }
        }
    }
};
// @lc code=end

